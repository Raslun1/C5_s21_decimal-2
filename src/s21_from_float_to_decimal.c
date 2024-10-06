#include "s21_decimal.h"

int s21_from_float_to_decimal(float src, s21_decimal *dst) {
  if (!dst || isnan(src) || isinf(src)) return S21_ERROR;

  if (src == 0.0f) {
    *dst = (s21_decimal){{0, 0, 0, 0}};
    return S21_OK;
  }

  int sign = signbit(src) ? S21_MINUS : S21_PLUS;
  float normalized = fabsf(src);

  int exponent = 0;
  while (normalized >= 10.0f) {
    normalized /= 10.0f;
    exponent++;
  }
  while (normalized < 1.0f && exponent > -28) {
    normalized *= 10.0f;
    exponent--;
  }

  if (exponent < -28 || exponent > 28) return S21_ERROR;

  int digits_to_keep = 7 - exponent;

  if (digits_to_keep < 0) {
    normalized = nearbyintf(normalized * powf(10.0f, -digits_to_keep)) /
                 powf(10.0f, -digits_to_keep);
    exponent -= digits_to_keep;
    digits_to_keep = 0;
  }

  if (digits_to_keep > 0) {
    normalized = truncf(normalized * powf(10.0f, digits_to_keep)) /
                 powf(10.0f, digits_to_keep);
  }

  if (normalized >= 4294967296.0f) {
    normalized = 4294967295.0f;
  }

  s21_bdecimal bdec = {{0, 0, 0, 0}};
  for (int i = 0; i < 96 && normalized > 0.0f; i++) {
    normalized *= 2.0f;
    if (normalized >= 1.0f) {
      bdec.bits[i / 32] |= 1u << (i % 32);
      normalized -= 1.0f;
    }
  }

  bdec.bits[6] = _set_bit(bdec.bits[6], 23, exponent, 8);
  bdec.bits[6] = _set_bit(bdec.bits[6], 31, sign, 1);
  _convert_bd_to_d(&bdec, dst);

  return S21_OK;
}