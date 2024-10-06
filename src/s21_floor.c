#include "s21_decimal.h"

int s21_floor(s21_decimal value, s21_decimal *result) {
  int res = 0;

  if (result != NULL) {
    int sign = _get_bit(value.bits[3], 31, 1);
    int scale = _get_bit(value.bits[3], 23, 8);
    result->bits[3] = _set_bit(result->bits[3], 31, sign, 1);
    int remainder = 0, distance = 0;
    s21_bdecimal one = {{1, 0, 0, 0, 0, 0, 0}};
    s21_bdecimal temp = {{0, 0, 0, 0, 0, 0, 0}};
    _convert_d_to_bd(&value, &temp);
    temp.bits[6] = _set_bit(temp.bits[6], 0, 23, 8);
    while (scale > 0) {
      _div10(&temp, &remainder);
      distance += remainder;
      scale--;
    }
    if (sign && distance) {
      _add_bdecimal(one, temp, &temp);
    }
    _convert_bd_to_d(&temp, result);
    result->bits[3] = _set_bit(result->bits[3], 31, sign, 1);
  } else
    res = 1;

  return res;
}