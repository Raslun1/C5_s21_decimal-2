#include "s21_decimal.h"

int get_sign(s21_decimal decimal) {
  int sign = 0;
  s21_decimal_bit3 num;
  num.n = decimal.bits[3];
  if (num.part.sign == 0)
    sign = 0;
  else
    sign = 1;
  return sign;
}

int get_scale(s21_decimal num) {
  int res = 0;
  for (int i = 119; i >= 112; i--) {
    res = (res << 1) | _gget_bit(num, i);
  }
  return res;
}

int s21_from_decimal_to_float(s21_decimal src, float *dst) {
  s21_result res = S21_OK;
  if (dst) {
    double temp = 0, exp = 0;
    for (int i = 0; i < 96; i++) {
      if (_gget_bit(src, i))
        temp += pow(2, i);              // 0b00000000000000000000000011101001
    }                                   // 1 + 8 + 32 + 64 + 128 = 233
    get_sign(src) ? temp *= -1 : temp;  // 233
    exp = pow(10.0, get_scale(src));    // exp - 1
    *dst = temp / exp;                  // 233 / 10 = 23.3
  } else
    res = S21_ERROR;
  return res;  // 23.3
}

// int main() {
//   s21_decimal a = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
//   float b;  //{{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x00000000}}; //
//   int res = s21_from_decimal_to_float(a, &b);
//   printf("%f\n", b);
//   printf("%d\n", res);
//   return 0;
// }
