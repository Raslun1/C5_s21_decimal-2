#include "s21_decimal.h"

int s21_decimal_get_sign(s21_decimal decimal) {
  int sign = 0;
  s21_decimal_bit3 num;
  num.n = decimal.bits[3];
  if (num.part.sign == 0)
    sign = 0;
  else
    sign = 1;
  return sign;
}

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  s21_result res = S21_OK;
  s21_decimal dec = {{0, 0, 0, 0}};
  s21_truncate(src, &dec);
  int sign = s21_decimal_get_sign(src);
  if (sign == 1) {
    *dst = -dec.bits[0];
  } else {
    *dst = dec.bits[0];
  }
  return res;
}