#include "./s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  result->bits[0] = value_1.bits[0] + value_2.bits[0];
  return result->bits[0];
}
