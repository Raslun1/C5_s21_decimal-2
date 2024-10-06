#include "s21_decimal.h"

int s21_is_not_equal(s21_decimal n1, s21_decimal n2) {
  int res = 0;
  return res = !s21_is_equal(n1, n2);
}

// int main(){

//     s21_decimal number_1 = {{2500, 0, 0, 0b100000000000000000}};
//   s21_decimal number_2 = {{250, 0, 0, 0b10000000000000000}};
//   int res = s21_is_not_equal(number_1, number_2);

// //   _print_dec(number_1); _print_dec(number_2);
//     printf("%d\n", res);
//     printf("%d\n", 0);
//     return res;
// }