#include "s21_decimal.h"

int s21_is_less(s21_decimal val_1, s21_decimal val_2) {
  int res = 0, scale = 0;
  s21_bdecimal bd_val_1 = {{0, 0, 0, 0, 0, 0, 0}};
  s21_bdecimal bd_val_2 = {{0, 0, 0, 0, 0, 0, 0}};
  unsigned int sign_num1 = _get_bit(val_1.bits[3], 31, 1),
               sign_num2 = _get_bit(val_2.bits[3], 31, 1);
  // unsigned int scale_num1 = _get_bit(val_1.bits[3], 23, 8), scale_num2 =
  // _get_bit(val_2.bits[3], 23, 8);

  if ((_decimal_is_zero(val_1) && _decimal_is_zero(val_2)))
    res = 0;
  else if (sign_num1 != sign_num2) {
    res = sign_num1;
  } else {
    _convert_d_to_bd(&val_1, &bd_val_1);
    _convert_d_to_bd(&val_2, &bd_val_2);
    _normal(&bd_val_1, &bd_val_2, &scale);
    // _print_bdec(bd_val_1);
    // _print_bdec(bd_val_2);
    if (sign_num1 == sign_num2) {
      int i = 0;
      for (i = 5; i >= 0; i--) {
        // printf("%d\n", (bd_val_1.bits[i] < bd_val_2.bits[i]));
        if ((bd_val_1.bits[i] < bd_val_2.bits[i]) ||
            (bd_val_1.bits[i] > bd_val_2.bits[i]))
          break;
      }
      res = (i != -1) && ((sign_num1 && bd_val_1.bits[i] > bd_val_2.bits[i]) +
                          (!sign_num1 && bd_val_1.bits[i] < bd_val_2.bits[i]));
    }
  }
  return res;
}

// int main(){
//   s21_decimal number_1 = {
//       {UINT_MAX, UINT_MAX, UINT_MAX, 0b00000000000111000000000000000000}};
//   s21_decimal number_2 = {
//       {UINT_MAX, UINT_MAX, UINT_MAX, 0b00000000000111000000000000000000}};
//   int res = s21_is_less(number_1, number_2);
//     // _print_dec(number_1); _print_dec(number_2);
//     printf("%d\n", res);
//     printf("%d\n", 0);
//     return 0;
// }