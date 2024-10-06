#include "s21_decimal.h"

int s21_truncate(s21_decimal value, s21_decimal *result) {
  int res = 0;
  if (result != NULL) {
    int remainder = 0;
    int scale = _get_bit(value.bits[3], 23, 8);
    int sign = _get_bit(value.bits[3], 31, 1);
    s21_bdecimal bd_val = {{0, 0, 0, 0, 0, 0, 0}};

    if (scale >= 0 && scale <= 28) {
      _convert_d_to_bd(&value, &bd_val);
      for (int i = 0; i < scale; i++) {
        _div10(&bd_val, &remainder);
      }
      _convert_bd_to_d(&bd_val, result);
      result->bits[3] = _set_bit(value.bits[3], 31, sign, 1);
      result->bits[3] = _set_bit(value.bits[3], 23, 0, 8);
    }
  } else
    res = 1;

  return res;
}
