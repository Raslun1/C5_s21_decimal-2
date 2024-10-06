#include "s21_decimal.h"

int s21_add(s21_decimal val_1, s21_decimal val_2, s21_decimal *result) {
  int res = 0;
  s21_bdecimal num = {{0, 0, 0, 0, 0, 0, 0}};
  unsigned int sign_num1 = _get_bit(val_1.bits[3], 31, 1),
               sign_num2 = _get_bit(val_2.bits[3], 31, 1);
  int scale = 0, sign = 0;

  s21_bdecimal bd_val_1 = {{0, 0, 0, 0, 0, 0, 0}};
  s21_bdecimal bd_val_2 = {{0, 0, 0, 0, 0, 0, 0}};

  int zero_vals = _decimal_is_zero(val_1) + _decimal_is_zero(val_2);

  if (zero_vals) {
    if (zero_vals == 2)
      *result = (s21_decimal){{0, 0, 0, 0}};
    else
      *result = _decimal_is_zero(val_1) ? val_2 : val_1;
  } else if (sign_num1 != sign_num2) {
    s21_negate(val_2, &val_2);
    res = s21_sub(val_1, val_2, result);
  } else {
    int exp_diff = 0;
    _convert_d_to_bd(&val_1, &bd_val_1);
    _convert_d_to_bd(&val_2, &bd_val_2);
    _normal(&bd_val_1, &bd_val_2, &scale);
    sign = sign_num1;
    _add_bdecimal(bd_val_1, bd_val_2, &num);
    num.bits[6] = _set_bit(num.bits[6], 23, scale, 8);
    _denormalize_dec(&num, &exp_diff);
    if (_is_inf(num)) {
      res = (sign) ? 2 : 1;
    } else {
      num.bits[6] = (sign << 31) + ((scale - exp_diff) << 16);
      _convert_bd_to_d(&num, result);
    }
  }
  return res;
}
