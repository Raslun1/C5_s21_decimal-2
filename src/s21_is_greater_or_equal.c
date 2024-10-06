#include "s21_decimal.h"

int s21_is_greater_or_equal(s21_decimal n1, s21_decimal n2) {
  int res = s21_is_equal(n1, n2) || s21_is_greater(n1, n2);
  return res;
}