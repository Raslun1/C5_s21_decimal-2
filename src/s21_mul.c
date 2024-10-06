#include "s21_decimal.h"

int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  int res = 0, scale = 0, sign = 0;
  s21_bdecimal num = {{0, 0, 0, 0}}, bd_value_1 = {{0, 0, 0, 0}},
               bd_value_2 = {{0, 0, 0, 0}};
  int scale1 = _get_bit(value_1.bits[3], 23, 8),
      scale2 = _get_bit(value_2.bits[3], 23, 8);
  int sign1 = _get_bit(value_1.bits[3], 31, 1),
      sign2 = _get_bit(value_2.bits[3], 31, 1);
  scale = scale1 + scale2;
  sign = (sign1 ^ sign2) ? 1 : 0;

  int zero_vals = _decimal_is_zero(value_1) + _decimal_is_zero(value_2);

  if (zero_vals) {
    *result = (s21_decimal){{0, 0, 0, 0}};
  } else {
    int exp_diff = 0;
    _convert_d_to_bd(&value_1, &bd_value_1);
    _convert_d_to_bd(&value_2, &bd_value_2);

    for (int i = 0, j = 0; i < 191; i++) {
      if (i % 32 == 0 && i != 0) j++;
      if (_get_bit(bd_value_2.bits[j], i % 32, 1)) {
        _add_bdecimal(bd_value_1, num, &num);
      }
      _shift_left(&bd_value_1, 1);
    }
    int remainder = 0, distance = 0;
    while (scale > 29) {
      _div10(&num, &remainder);
      distance += remainder;
      scale--;
    }
    num.bits[6] = _set_bit(num.bits[6], 23, scale, 8);
    _denormalize_dec(&num, &exp_diff);
    if (_is_inf(num)) {
      res = (sign) ? 2 : 1;
    } else {
      if (scale == 29 && !exp_diff) {
        scale--;
        _div10(&num, &remainder);
        _bank_rounding(&num, remainder, distance);
      }
      _convert_bd_to_d(&num, result);
      result->bits[3] = _set_bit(result->bits[3], 23, scale - exp_diff, 8);
      result->bits[3] = _set_bit(result->bits[3], 31, sign, 1);
    }
  }
  return res;
}
