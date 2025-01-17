#include "s21_decimal.h"

int s21_negate(s21_decimal value, s21_decimal *result) {
  int res = 0;
  if (result != NULL) {
    *result = value;
    result->bits[3] ^= 1 << 31;
  } else
    res = 1;
  return res;
}