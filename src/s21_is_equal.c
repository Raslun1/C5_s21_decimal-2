#include <stdio.h>

#include "s21_decimal.h"

int s21_is_equal(s21_decimal n1, s21_decimal n2) {
  int res = 0, scale = 0;
  // int signN1 = get_sign(n1);
  // int signN2 = get_sign(n2);
  // int expN1 = get_exponent(n1);
  // int expN2 = get_exponent(n2);

  unsigned int sign_num1 = _get_bit(n1.bits[3], 31, 1),
               sign_num2 = _get_bit(n2.bits[3], 31, 1);

  if (_decimal_is_zero(n1) && _decimal_is_zero(n2)) {
    res = 1;
  } else if (sign_num1 == sign_num2) {
    s21_bdecimal bd_val_1 = {{0, 0, 0, 0, 0, 0, 0}};
    s21_bdecimal bd_val_2 = {{0, 0, 0, 0, 0, 0, 0}};
    _convert_d_to_bd(&n1, &bd_val_1);
    _convert_d_to_bd(&n2, &bd_val_2);
    _normal(&bd_val_1, &bd_val_2, &scale);
    // _print_bdec(bd_val_1);
    // _print_bdec(bd_val_2);
    for (int i = 0; i <= 5 && bd_val_1.bits[i] == bd_val_2.bits[i]; i++) {
      if (i == 5) {
        res = 1;
        break;
      }
    }
  }
  return res;
}
