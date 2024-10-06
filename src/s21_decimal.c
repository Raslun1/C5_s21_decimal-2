#include "s21_decimal.h"

unsigned _get_bit(
    unsigned num, unsigned pos,
    unsigned n) {  //ФУНКЦИЯ ВОЗВРАЩЕТ БИТЫ, ИЗ РАЗРЯДА(num.bits[i]),
                   //  на позиции pos(в диапазоне 0-31)(крайняя правая позиция),
                   // по аналогии с set_bit, которую объяснял в гс в беседе тг
  unsigned shifted =
      num >> (pos + 1 - n);  //нужные биты сдвинуты в крайнее правое положение
  unsigned mask = ~(~0u << n);  // maska s vkuchennimi n krainimi pravimi bitami

  return shifted & mask;
}

int _gget_bit(s21_decimal num,
              int index) {  // тот же самы гет бит,но берёт только один бит
  int mask = 1 << (index % 32);
  return num.bits[index / 32] & mask ? 1 : 0;
}

unsigned _set_bit(
    unsigned num, unsigned pos, unsigned src,
    unsigned n) {  // установка бита в определённую позицию(гс в тг)
  unsigned rightmost_bits = src & ~(~0u << n);  // krainie pravie biti
  unsigned cleared_bits =
      num & ~((~(~0u << n))
              << (pos + 1 -
                  n));  // cleared bit for our pos ne izmenyaa ostavshiesya biti
  unsigned shifted = rightmost_bits
                     << (pos + 1 -
                         n);      // sdvig nuzni'h bitov v nuzhnuyu poziciu
  return cleared_bits | shifted;  // res
}

int _overflow(
    unsigned num1, unsigned num2,
    unsigned result) {  // возвращет 1 в случае переполнения разряда(n.bits[i])
  int overflow = 0;
  overflow = (result <= num1 && num2 != 0) || (result <= num2 && num1 != 0);
  return overflow;
}

void _swap_bdecs(s21_bdecimal* num1,
                 s21_bdecimal* num2) {  // свап значений децимал
  s21_bdecimal temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void _normal(s21_bdecimal* n1, s21_bdecimal* n2,
             int* scale) {  //приводит к еодному кол-ву чисел после запятой,
  int scale1 = _get_bit(n1->bits[6], 23, 8),
      scale2 = _get_bit(n2->bits[6], 23,
                        8);  // пример: числа 6.01 и 1.00000001, превратит в
                             // числа 6.01000000 и 1.00000001
  // int sign1 = _get_bit(n1->bits[6], 31, 1), sign2 = _get_bit(n2->bits[6], 31,
  // 1);

  if (scale1 == scale2) {
    *scale = scale1;
  } else {
    while (scale1 != scale2) {
      if (scale1 > scale2) {
        _mul10(n2);
        scale2++;
        n2->bits[6] = _set_bit(n2->bits[6], 23, scale2, 8);
        *scale = scale1;
      } else if (scale1 < scale2) {
        _mul10(n1);
        scale1++;
        // printf("\nscale 1 = %d\n", scale1);
        n1->bits[6] = _set_bit(n2->bits[6], 23, scale1, 8);
        *scale = scale2;
      }
    }
  }
}

int _is_inf(s21_bdecimal val) {  // проверка на бесконечность в случае если
                                 // числа больше dec_max, вернёт 1
  int res = 0;
  int scale = 0;
  s21_bdecimal dec_max = {{UINT_MAX, UINT_MAX, UINT_MAX, 0, 0, 0, 0}};

  _normal(&val, &dec_max, &scale);
  res = _is_greater_bdec(val, dec_max);
  return res;
}

int _is_greater_bdec(s21_bdecimal n1,
                     s21_bdecimal n2) {  //лог. БОЛЬШЕ для big decimal
  int res = 0;
  for (int i = 5; i >= 0 && res == 0; i--) {
    if (n1.bits[i] != n2.bits[i]) {
      if (n1.bits[i] > n2.bits[i]) {
        res = 1;
      }
      break;
    }
  }
  return res;
}

void _denormalize_dec(
    s21_bdecimal* num,
    int* exp_diff) {  //нужна для чисел которые не вмещаются в возможное число
                      // decimal, она обрезает, при помощи деления на 10 и
                      //банковского округления
  int distance = 0, remainder = 0;
  int scale = _get_bit(num->bits[6], 23, 8);
  s21_bdecimal max = {{UINT_MAX, UINT_MAX, UINT_MAX, 0, 0, 0, 0}};
  // printf("%d >=< %d\n", _is_greater_bdec(*num, max),*exp_diff < scale);
  while ((_is_greater_bdec(*num, max) && *exp_diff < scale)) {
    (*exp_diff)++;
    _div10(num, &remainder);
    distance += remainder;
  }

  if (*exp_diff) _bank_rounding(num, remainder, distance);
}

void _bank_rounding(s21_bdecimal* num, int remainder,
                    int distance) {  // банковское округления (читать в гугле)
  if (remainder >= 5) {
    if ((distance == 5 && num->bits[0] & 1) || distance > 5) {
      s21_bdecimal one = {{1, 0, 0, 0, 0, 0, 0}};
      _add_bdecimal(*num, one, num);
    }
  }
}

int _decimal_is_zero(s21_decimal n) {  // проверка числа децимал на ноль
  int res = 1;
  // sign = _get_bit(n.bits[3], 31, 1);
  // scale = _get_bit(n.bits[3], 23, 8);
  for (int i = 0; i < 3 && res != 0; i++) {
    if (n.bits[i] != 0) res = 0;
  }

  return res;
}

// int get_bit(s21_decimal num, int index) {
//   int mask = 1 << (index % 32);
//   return num.bits[index / 32] & mask ? 1 : 0;
// }

void _print_dec(s21_decimal num) {  // печать дицимала
  for (int i = 3; i >= 0; i--) {
    for (int j = 31; j >= 0; j--) {
      printf("%d", _get_bit(num.bits[i], j, 1));
      if (j % 4 == 0 || j == 0) {
        printf(" ");
      }
      if ((j % 32 == 0 || j == 0) && i != 0) {
        printf("| ");
      }
    }
  }
  printf("\n");
}

void _print_bdec(s21_bdecimal num) {  // печать биг дицимала
  for (int i = 6; i >= 0; i--) {
    for (int j = 31; j >= 0; j--) {
      printf("%d", _get_bit(num.bits[i], j, 1));
      if (j % 4 == 0 || j == 0) {
        printf(" ");
      }
      if ((j % 32 == 0 || j == 0) && i != 0) {
        printf("| ");
      }
    }
  }
  printf("\n");
}

void _shift_left(s21_bdecimal* n,
                 int c) {  // сдвиг влево всего числа биг децимал
  int cur_overflow = 0, last_overflow = 0;
  if (c == 32) {
    for (int i = 0; i < 6; i++) {
      cur_overflow = n->bits[i];
      n->bits[i] = last_overflow;
      last_overflow = cur_overflow;
    }
  } else if (c < 0) {
    _shift_right(n, -c);
  } else {
    for (int i = 0; i < 6; i++) {
      cur_overflow = _get_bit(n->bits[i], 31, c);
      n->bits[i] <<= c;
      n->bits[i] = _set_bit(n->bits[i], c - 1, last_overflow, c);
      last_overflow = cur_overflow;
    }
  }
}

void _shift_right(s21_bdecimal* n,
                  int c) {  // такая же шляпа, что функция выше, но наоборот
  int cur_overflow = 0, last_overflow = 0;
  // unsigned int mask = 0b10000000000000000000000000000000; // Маска для
  // установки в крайний правый бит

  if (c == 32) {
    for (int i = 5; i >= 0; i--) {
      cur_overflow = n->bits[i];
      n->bits[i] = last_overflow;
      last_overflow = cur_overflow;
    }
  } else if (c < 0) {
    _shift_left(n, -c);
  } else {
    for (int i = 5; i >= 0; i--) {
      cur_overflow =
          _get_bit(n->bits[i], c - 1, c);  // Получаем крайние правые биты
      n->bits[i] >>= c;  // Сдвигаем вправо на указанное количество битов
      n->bits[i] = _set_bit(
          n->bits[i], 31, last_overflow,
          c);  // Устанавливаем крайний левый бит из последнего переполнения
      last_overflow = cur_overflow;
    }
    // }
  }
}

void _div10(s21_bdecimal* n, int* rem10) {  // деление числа big decimal на 10

  s21_bdecimal x1 = *n, x2 = *n, res = {{0, 0, 0, 0, 0, 0, 0}};
  x1.bits[6] = 0, x2.bits[6] = 0;
  s21_decimal res_d = {{0, 0, 0, 0}};
  // int sign = _get_bit(n -> bits[6], 31, 1);

  _shift_right(&x1, 1);
  _shift_right(&x2, 2);
  _add_bdecimal(x1, x2, &res);
  int y = 4;
  for (int i = 0; i < 6; i++) {
    if (i < 4) {
      x1 = res;
      _shift_right(&x1, y);
      _add_bdecimal(res, x1, &res);
      y *= 2;
    } else if (i == 4) {
      x1 = res;
      _shift_right(&x1, 32);
      _shift_right(&x1, 32);
      _add_bdecimal(res, x1, &res);
    } else if (i == 5) {
      x1 = res;
      for (int i = 0; i < 4; i++) {
        _shift_right(&x1, 32);
      }
      _add_bdecimal(res, x1, &res);
      _shift_right(&res, 3);  // res - orig digit; x2 - ostatok.
    }
  }

  x1 = res;
  _shift_left(&x1, 2);
  _add_bdecimal(x1, res, &x2);
  s21_bdecimal temp;
  _shift_left(&x2, 1);
  _inv_bdecimal(x2, &temp);
  _add_bdecimal(*n, temp, &x2);

  *rem10 = x2.bits[0] % 10;

  s21_decimal nine = {{9, 0, 0, 0}};
  s21_bdecimal one = {{1, 0, 0, 0, 0, 0}};

  _convert_bd_to_d(&x2, &res_d);
  if (s21_is_greater(res_d, nine)) {
    _add_bdecimal(res, one, &res);
  }
  *n = res;
}

void _add_bdecimal(s21_bdecimal x1, s21_bdecimal x2,
                   s21_bdecimal* res) {  // сложение чисел биг децимал
  unsigned over_val = 0;
  for (int i = 0; i < 6; i++) {
    res->bits[i] = x1.bits[i] + x2.bits[i] + over_val;
    over_val = _overflow(x1.bits[i], x2.bits[i], res->bits[i]);
  }
}

void _inv_bdecimal(s21_bdecimal n,
                   s21_bdecimal* res) {  // инверт чисел биг децимал

  int over_val = 1;

  for (int i = 0; i < 6; i++) {
    res->bits[i] = ~n.bits[i] + over_val;
    over_val = _overflow(~n.bits[i], over_val, res->bits[i]);
  }
}

void _mul10(s21_bdecimal* n) {  // умножение БДецимал
  unsigned over_val = 0;
  s21_bdecimal n1 = *n;
  _shift_left(&n1, 1);
  _shift_left(n, 3);

  int temp = 0;
  for (int i = 0; i < 6; i++) {
    temp = n->bits[i];
    n->bits[i] += n1.bits[i] + over_val;
    over_val = _overflow(temp, n1.bits[i], n->bits[i]);
  }
}

void _convert_bd_to_d(s21_bdecimal* n,
                      s21_decimal* res) {  // название функции говорит за себя
  res->bits[3] = n->bits[6];
  for (int i = 0; i < 3;
       i++) {  // Вместо 6 использовано 4, так как res->bits имеет 4 элемента
    res->bits[i] = n->bits[i];
  }
}

void _convert_d_to_bd(s21_decimal* n, s21_bdecimal* res) {  // аналогично

  res->bits[6] = n->bits[3];

  for (int i = 0; i < 3; i++) {
    res->bits[i] = n->bits[i];
  }
}

// 101101000111110110101100011110 10110110001100001101111110010011

// int main(){

//     return 0;
// }
