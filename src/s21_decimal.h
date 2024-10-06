#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef S21_DECIMAL
#define S21_DECIMAL

#define MAXSIZ 4
#define MAXSIZFORBDEC 7
// 7.922816251426433759354395033950335
// 73.113035938817713228771289953
//+/-79 228 162 514 264 337 593,5543,950,335
//(+/-7.922816251426433759354395033950335E+28)

typedef struct s21_decimal {
  unsigned int bits[MAXSIZ];
} s21_decimal;

typedef union s21_decimal_bit3 {
  unsigned int n;
  struct {
    uint32_t empty1 : 16;
    uint32_t exponent : 8;
    uint32_t empty2 : 7;
    uint32_t sign : 1;
  } part;
} s21_decimal_bit3;

typedef struct {
  unsigned int bits[MAXSIZFORBDEC];
} s21_bdecimal;

typedef enum s21_sign { S21_PLUS = 0, S21_MINUS = 1 } s21_decimal_sign;

typedef enum s21_result { S21_OK = 0, S21_ERROR = 1 } s21_result;

void _decimal_set_sign(s21_decimal *decimal, int sign);
int _gget_bit(s21_decimal num, int index);

// base supp funcs
unsigned _get_bit(unsigned num, unsigned pos, unsigned n);
unsigned _set_bit(unsigned num, unsigned pos, unsigned src, unsigned n);

// supp fucs
int _overflow(unsigned n1, unsigned n2, unsigned res);
void _normal(s21_bdecimal *n1, s21_bdecimal *n2, int *scale);
void _bank_rounding(s21_bdecimal *num, int remainder, int distance);
void _shift_left(s21_bdecimal *n, int c);
void _shift_right(s21_bdecimal *n, int c);
void _mul10(s21_bdecimal *n);
void _div10(s21_bdecimal *n, int *rem10);
// void _div10_floor_round(s21_bdecimal* n);
void _add_bdecimal(s21_bdecimal x1, s21_bdecimal x2, s21_bdecimal *res);
void _inv_bdecimal(s21_bdecimal n, s21_bdecimal *res);
int _is_inf(s21_bdecimal val);
int _is_greater_bdec(s21_bdecimal x1, s21_bdecimal x2);
// void _convert(unsigned n, unsigned res);
void _convert_d_to_bd(s21_decimal *n, s21_bdecimal *res);
void _convert_bd_to_d(s21_bdecimal *n, s21_decimal *res);
int _decimal_is_zero(s21_decimal n);
void _print_dec(s21_decimal num);
void _print_bdec(s21_bdecimal num);
void _denormalize_dec(s21_bdecimal *num, int *exp_diff);
void _swap_bdecs(s21_bdecimal *num1, s21_bdecimal *num2);

// funcs for float_dec/dec_float
void s21_decimal_set_sign(s21_decimal *decimal, int sign);
void s21_decimal_set_exp(s21_decimal *decimal);
int s21_from_float_to_decimal(float src, s21_decimal *dst);
int my_implement(float src, s21_decimal *dst);
void determine_right(int i, int size_arr, char *str2, int j);
void str_int(int j, int i, s21_decimal *dst, float src);
int get_scale(s21_decimal num);
int get_sign(s21_decimal decimal);

// main funcs
// 1 logic operations
int s21_is_equal(s21_decimal, s21_decimal);
int s21_is_not_equal(s21_decimal, s21_decimal);
int s21_is_less(s21_decimal, s21_decimal);
int s21_is_greater(s21_decimal, s21_decimal);
int s21_is_less_or_equal(s21_decimal, s21_decimal);
int s21_is_greater_or_equal(s21_decimal, s21_decimal);

// arithmetic
int s21_add(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_sub(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_mul(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);
int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result);

// okruglenie
int s21_floor(s21_decimal value, s21_decimal *result);
int s21_round(s21_decimal value, s21_decimal *result);
int s21_negate(s21_decimal value, s21_decimal *result);
int s21_truncate(s21_decimal value, s21_decimal *result);

// converters
int s21_from_decimal_to_int(s21_decimal src, int *dst);
int s21_from_int_to_decimal(int src, s21_decimal *dst);
int s21_from_decimal_to_float(s21_decimal src, float *dst);
int s21_from_float_to_decimal(float src, s21_decimal *dst);

#endif
