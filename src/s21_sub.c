#include "s21_decimal.h"

int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  s21_bdecimal bd_val_1 = {{0, 0, 0, 0, 0, 0, 0}};
  s21_bdecimal bd_val_2 = {{0, 0, 0, 0, 0, 0, 0}};
  s21_bdecimal num = {{0, 0, 0, 0, 0, 0, 0}};
  unsigned int sign_num1 = _get_bit(value_1.bits[3], 31, 1),
               sign_num2 = _get_bit(value_2.bits[3], 31, 1);
  int res = 0, scale = 0, res_sign = 0;
  if (_decimal_is_zero(value_1) || _decimal_is_zero(value_2)) {
    if (_decimal_is_zero(value_1)) {
      res = s21_negate(value_2, result);
    } else
      *result = value_1;
  } else if (s21_is_equal(value_1, value_2))
    *result = (s21_decimal){{0, 0, 0, 0}};
  else if (sign_num1 != sign_num2) {
    s21_negate(value_2, &value_2);
    res = s21_add(value_1, value_2, result);
  } else {
    int exp_diff = 0;
    value_1.bits[3] = _set_bit(value_1.bits[3], 31, 0, 1);
    value_2.bits[3] = _set_bit(value_2.bits[3], 31, 0, 1);
    _convert_d_to_bd(&value_1, &bd_val_1);
    _convert_d_to_bd(&value_2, &bd_val_2);

    if (s21_is_greater(value_2, value_1)) {
      _swap_bdecs(&bd_val_1, &bd_val_2);
      res_sign = !sign_num1;
    } else
      res_sign = sign_num1;

    _normal(&bd_val_1, &bd_val_2, &scale);

    _inv_bdecimal(bd_val_2, &bd_val_2);
    _add_bdecimal(bd_val_1, bd_val_2, &num);
    num.bits[6] = _set_bit(num.bits[6], 23, scale, 8);

    _denormalize_dec(&num, &exp_diff);
    if (_is_inf(num)) {
      res = (_get_bit(num.bits[6], 31, 1)) ? 2 : 1;
    } else {
      num.bits[6] = (res_sign << 31) + ((scale - exp_diff) << 16);
      _convert_bd_to_d(&num, result);
    }
  }
  return res;
}
