#include "s21_decimal.h"

s21_decimal s21_decimal_get_zero(void) {
  s21_decimal result;
  result.bits[0] = 0;
  result.bits[1] = 0;
  result.bits[2] = 0;
  result.bits[3] = 0;
  return result;
}

void s21_decimal_set_sign(s21_decimal *decimal, int sign) {
  s21_decimal_bit3 num;
  num.n = decimal->bits[3];
  if (sign == S21_PLUS)
    num.part.sign = S21_PLUS;
  else
    num.part.sign = S21_MINUS;
  decimal->bits[3] = num.n;
}

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  s21_result res = S21_OK;
  if (dst) {
    *dst = s21_decimal_get_zero();
    int sign;
    if (src < 0) {
      sign = S21_MINUS;
      src = -src;
    } else
      sign = S21_PLUS;
    dst->bits[0] = src;
    s21_decimal_set_sign(dst, sign);
  } else
    res = S21_ERROR;
  return res;
}

// int main(){
//   int src = -10;
//   s21_decimal dst = {{0b00000000000000000000000000000000, 0, 0,
//   0b00000000000000000000000000000000}}; s21_decimal anticip =
//   {{0b00000000000000000000000000001010, 0, 0,
//   0b10000000000000000000000000000000}}; int res =
//   s21_from_int_to_decimal(src, &dst);

//   printf("%d\n", src);
//   _print_dec(dst);
//   _print_dec(anticip);

//   // ck_assert_int_eq(res, 0);

//   return 0;
// }
