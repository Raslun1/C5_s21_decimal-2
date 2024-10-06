#include "s21_decimal.h"

int s21_is_greater(s21_decimal n1, s21_decimal n2) {
  int res = !s21_is_less_or_equal(n1, n2);
  return res;
}