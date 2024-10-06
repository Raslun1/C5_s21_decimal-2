#include "s21_decimal.h"

int s21_round(s21_decimal value, s21_decimal *result) {  // 2
  int res = 0, remainder = 0;
  int sign = _get_bit(value.bits[3], 31, 1),
      scale = _get_bit(value.bits[3], 23, 8);
  s21_bdecimal temp = {{0, 0, 0, 0, 0, 0, 0}};
  _convert_d_to_bd(&value, &temp);
  while (scale > 0) {
    _div10(&temp, &remainder);
    scale--;
  }
  if (remainder >= 5) {
    s21_bdecimal one = {{1, 0, 0, 0, 0, 0, 0}};
    _add_bdecimal(temp, one, &temp);
  }
  _convert_bd_to_d(&temp, result);
  result->bits[3] = _set_bit(result->bits[3], 31, sign, 1);

  return res;
}
