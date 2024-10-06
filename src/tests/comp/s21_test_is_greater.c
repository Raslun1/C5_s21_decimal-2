#include <check.h>
#include <stdio.h>

#include "../../s21_decimal.h"
#include "../s21_test.h"

START_TEST(test_is_greater_ok1) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok2) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok3) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok4) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok5) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok6) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok7) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok8) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok9) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok10) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok11) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok12) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok13) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok14) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok15) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok16) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok17) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok18) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok19) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok20) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok21) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok22) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok23) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok24) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok25) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok26) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok27) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok28) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok29) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok30) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok31) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok32) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok33) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok34) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok35) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok36) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok37) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok38) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok39) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok40) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok41) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok42) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok43) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok44) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok45) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok46) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok47) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok48) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok49) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok50) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok51) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok52) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok53) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok54) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok55) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok56) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok57) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok58) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok59) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok60) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok61) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok62) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok63) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok64) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok65) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok66) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok67) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok68) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok69) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok70) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok71) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok72) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok73) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok74) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok75) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok76) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok77) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok78) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok79) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok80) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok81) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok82) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok83) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok84) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok85) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok86) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok87) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok88) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok89) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok90) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok91) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok92) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok93) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok94) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok95) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok96) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok97) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok98) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok99) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok100) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok101) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok102) {
  // -19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok103) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok104) {
  // 19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok105) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok106) {
  // 3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok107) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok108) {
  // -3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok109) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok110) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok111) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok112) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok113) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok114) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok115) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok116) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok117) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok118) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok119) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok120) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok121) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok122) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok123) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok124) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok125) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok126) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok127) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok128) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok129) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok130) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok131) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok132) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok133) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok134) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok135) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok136) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok137) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok138) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok139) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok140) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok141) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok142) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok143) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok144) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok145) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok146) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok147) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok148) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok149) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok150) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok151) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok152) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok153) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok154) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok155) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok156) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok157) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok158) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok159) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok160) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok161) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok162) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok163) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok164) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok165) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok166) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok167) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok168) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok169) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok170) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok171) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok172) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok173) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok174) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok175) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok176) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok177) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok178) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok179) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok180) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok181) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok182) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok183) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok184) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok185) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok186) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok187) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok188) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok189) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok190) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok191) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok192) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok193) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok194) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok195) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok196) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok197) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok198) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok199) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok200) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok201) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok202) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok203) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok204) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok205) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok206) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok207) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok208) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok209) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok210) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok211) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok212) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok213) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok214) {
  // -19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok215) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok216) {
  // 19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok217) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok218) {
  // 3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok219) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok220) {
  // -3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok221) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok222) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok223) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok224) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok225) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok226) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok227) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok228) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok229) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok230) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok231) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok232) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok233) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok234) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok235) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok236) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok237) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok238) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok239) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok240) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok241) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok242) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok243) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok244) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok245) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok246) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok247) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok248) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok249) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok250) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok251) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok252) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok253) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok254) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok255) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok256) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok257) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok258) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok259) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok260) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok261) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok262) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok263) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok264) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok265) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok266) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok267) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok268) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok269) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok270) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok271) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok272) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok273) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok274) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok275) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok276) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok277) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok278) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok279) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok280) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok281) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok282) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok283) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok284) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok285) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok286) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok287) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok288) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok289) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok290) {
  // 1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok291) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765
  s21_decimal decimal2 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok292) {
  // -1431655765
  s21_decimal decimal1 = {{0x55555555, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok293) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok294) {
  // 1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x50000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok295) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.00000
  s21_decimal decimal2 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok296) {
  // -1431655765.00000
  s21_decimal decimal1 = {{0x5554D320, 0x8235, 0x0, 0x80050000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok297) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok298) {
  // 1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok299) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655765.000000000000000001
  s21_decimal decimal2 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok300) {
  // -1431655765.000000000000000001
  s21_decimal decimal1 = {{0xC8340001, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok301) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok302) {
  // 1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok303) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -1431655764.999999999999999999
  s21_decimal decimal2 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok304) {
  // -1431655764.999999999999999999
  s21_decimal decimal1 = {{0xC833FFFF, 0x8881186E, 0x4A03CE6, 0x80120000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok305) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok306) {
  // 0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok307) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.9999999999999999999999999999
  s21_decimal decimal2 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok308) {
  // -0.9999999999999999999999999999
  s21_decimal decimal1 = {{0xFFFFFFF, 0x3E250261, 0x204FCE5E, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok309) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok310) {
  // 0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok311) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000001
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok312) {
  // -0.0000000000000000000000000001
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok313) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok314) {
  // 0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x0}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok315) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok316) {
  // -0
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok317) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x800E0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok318) {
  // -0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x800E0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok319) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.00000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0xE0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok320) {
  // 0.00000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0xE0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok321) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok322) {
  // -0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok323) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 0.0000000000000000000000000000
  s21_decimal decimal2 = {{0x0, 0x0, 0x0, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok324) {
  // 0.0000000000000000000000000000
  s21_decimal decimal1 = {{0x0, 0x0, 0x0, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok325) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok326) {
  // -19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80080000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok327) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 19290120297533996546.12653034
  s21_decimal decimal2 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok328) {
  // 19290120297533996546.12653034
  s21_decimal decimal1 = {{0x11EAD3EA, 0xABA39F31, 0x63BA42F, 0x80000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok329) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok330) {
  // 3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x1C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok331) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -3.2370474408201521914302817507
  s21_decimal decimal2 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok332) {
  // -3.2370474408201521914302817507
  s21_decimal decimal1 = {{0xB219E4E3, 0xE34F18DD, 0x68983A95, 0x801C0000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok333) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // 858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok334) {
  // 858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x70000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok335) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -858826877820029649465.1465162
  s21_decimal decimal2 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok336) {
  // -858826877820029649465.1465162
  s21_decimal decimal1 = {{0x96DCDDCA, 0x5C57756E, 0x1BC00CA7, 0x80070000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok337) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok338) {
  // 79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok339) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -79228162514264337593543950335
  s21_decimal decimal2 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok340) {
  // -79228162514264337593543950335
  s21_decimal decimal1 = {{0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok341) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok342) {
  // 52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok343) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok344) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok345) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok346) {
  // 52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok347) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966891
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok348) {
  // -52818775009509558395695966891
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok349) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok350) {
  // 5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x1B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok351) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5.281877500950955839569596690
  s21_decimal decimal2 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok352) {
  // -5.281877500950955839569596690
  s21_decimal decimal1 = {{0x11111112, 0x11111111, 0x11111111, 0x801B0000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok353) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok354) {
  // 5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok355) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689
  s21_decimal decimal2 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok356) {
  // -5281877500950955839569596689
  s21_decimal decimal1 = {{0x11111111, 0x11111111, 0x11111111, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok357) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok358) {
  // 5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok359) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -5281877500950955839569596689.0
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok360) {
  // -5281877500950955839569596689.0
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok361) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok362) {
  // 7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok363) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395033
  s21_decimal decimal2 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok364) {
  // -7922816251426433759354395033
  s21_decimal decimal1 = {{0x99999999, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok365) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok366) {
  // 7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok367) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -7922816251426433759354395034
  s21_decimal decimal2 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok368) {
  // -7922816251426433759354395034
  s21_decimal decimal1 = {{0x9999999A, 0x99999999, 0x19999999, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok369) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok370) {
  // 1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok371) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034409
  s21_decimal decimal2 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok372) {
  // -1.2297829382473034409
  s21_decimal decimal1 = {{0xAAAAAAA9, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok373) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok374) {
  // 1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok375) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034410
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok376) {
  // -1.2297829382473034410
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok377) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok378) {
  // 1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok379) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.2297829382473034411
  s21_decimal decimal2 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok380) {
  // -1.2297829382473034411
  s21_decimal decimal1 = {{0xAAAAAAAB, 0xAAAAAAAA, 0x0, 0x80130000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok381) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x0}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok382) {
  // 1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x0}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok383) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1
  s21_decimal decimal2 = {{0x1, 0x0, 0x0, 0x80000000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok384) {
  // -1
  s21_decimal decimal1 = {{0x1, 0x0, 0x0, 0x80000000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok385) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x10000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok386) {
  // 1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x10000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok387) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.0
  s21_decimal decimal2 = {{0xA, 0x0, 0x0, 0x80010000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok388) {
  // -1.0
  s21_decimal decimal1 = {{0xA, 0x0, 0x0, 0x80010000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok389) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x20000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok390) {
  // 1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x20000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok391) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.22
  s21_decimal decimal2 = {{0x7A, 0x0, 0x0, 0x80020000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok392) {
  // -1.22
  s21_decimal decimal1 = {{0x7A, 0x0, 0x0, 0x80020000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok393) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok394) {
  // 1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x60000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok395) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.230001
  s21_decimal decimal2 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok396) {
  // -1.230001
  s21_decimal decimal1 = {{0x12C4B1, 0x0, 0x0, 0x80060000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok397) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // 1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x50000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok398) {
  // 1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x50000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok399) {
  // -52818775009509558395695966890
  s21_decimal decimal1 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  // -1.23000
  s21_decimal decimal2 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  int check = S21_COMPARISON_FALSE;

  test_is_greater(decimal1, decimal2, check);
}

START_TEST(test_is_greater_ok400) {
  // -1.23000
  s21_decimal decimal1 = {{0x1E078, 0x0, 0x0, 0x80050000}};
  // -52818775009509558395695966890
  s21_decimal decimal2 = {{0xAAAAAAAA, 0xAAAAAAAA, 0xAAAAAAAA, 0x80000000}};
  int check = S21_COMPARISON_TRUE;

  test_is_greater(decimal1, decimal2, check);
}
Suite *is_greater_suite1(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("\033[45m-=S21_IS_GREATER=-\033[0m");
  tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_is_greater_ok1);
  tcase_add_test(tc_core, test_is_greater_ok2);
  tcase_add_test(tc_core, test_is_greater_ok3);
  tcase_add_test(tc_core, test_is_greater_ok4);
  tcase_add_test(tc_core, test_is_greater_ok5);
  tcase_add_test(tc_core, test_is_greater_ok6);
  tcase_add_test(tc_core, test_is_greater_ok7);
  tcase_add_test(tc_core, test_is_greater_ok8);
  tcase_add_test(tc_core, test_is_greater_ok9);
  tcase_add_test(tc_core, test_is_greater_ok10);
  tcase_add_test(tc_core, test_is_greater_ok11);
  tcase_add_test(tc_core, test_is_greater_ok12);
  tcase_add_test(tc_core, test_is_greater_ok13);
  tcase_add_test(tc_core, test_is_greater_ok14);
  tcase_add_test(tc_core, test_is_greater_ok15);
  tcase_add_test(tc_core, test_is_greater_ok16);
  tcase_add_test(tc_core, test_is_greater_ok17);
  tcase_add_test(tc_core, test_is_greater_ok18);
  tcase_add_test(tc_core, test_is_greater_ok19);
  tcase_add_test(tc_core, test_is_greater_ok20);
  tcase_add_test(tc_core, test_is_greater_ok21);
  tcase_add_test(tc_core, test_is_greater_ok22);
  tcase_add_test(tc_core, test_is_greater_ok23);
  tcase_add_test(tc_core, test_is_greater_ok24);
  tcase_add_test(tc_core, test_is_greater_ok25);
  tcase_add_test(tc_core, test_is_greater_ok26);
  tcase_add_test(tc_core, test_is_greater_ok27);
  tcase_add_test(tc_core, test_is_greater_ok28);
  tcase_add_test(tc_core, test_is_greater_ok29);
  tcase_add_test(tc_core, test_is_greater_ok30);
  tcase_add_test(tc_core, test_is_greater_ok31);
  tcase_add_test(tc_core, test_is_greater_ok32);
  tcase_add_test(tc_core, test_is_greater_ok33);
  tcase_add_test(tc_core, test_is_greater_ok34);
  tcase_add_test(tc_core, test_is_greater_ok35);
  tcase_add_test(tc_core, test_is_greater_ok36);
  tcase_add_test(tc_core, test_is_greater_ok37);
  tcase_add_test(tc_core, test_is_greater_ok38);
  tcase_add_test(tc_core, test_is_greater_ok39);
  tcase_add_test(tc_core, test_is_greater_ok40);
  tcase_add_test(tc_core, test_is_greater_ok41);
  tcase_add_test(tc_core, test_is_greater_ok42);
  tcase_add_test(tc_core, test_is_greater_ok43);
  tcase_add_test(tc_core, test_is_greater_ok44);
  tcase_add_test(tc_core, test_is_greater_ok45);
  tcase_add_test(tc_core, test_is_greater_ok46);
  tcase_add_test(tc_core, test_is_greater_ok47);
  tcase_add_test(tc_core, test_is_greater_ok48);
  tcase_add_test(tc_core, test_is_greater_ok49);
  tcase_add_test(tc_core, test_is_greater_ok50);
  tcase_add_test(tc_core, test_is_greater_ok51);
  tcase_add_test(tc_core, test_is_greater_ok52);
  tcase_add_test(tc_core, test_is_greater_ok53);
  tcase_add_test(tc_core, test_is_greater_ok54);
  tcase_add_test(tc_core, test_is_greater_ok55);
  tcase_add_test(tc_core, test_is_greater_ok56);
  tcase_add_test(tc_core, test_is_greater_ok57);
  tcase_add_test(tc_core, test_is_greater_ok58);
  tcase_add_test(tc_core, test_is_greater_ok59);
  tcase_add_test(tc_core, test_is_greater_ok60);
  tcase_add_test(tc_core, test_is_greater_ok61);
  tcase_add_test(tc_core, test_is_greater_ok62);
  tcase_add_test(tc_core, test_is_greater_ok63);
  tcase_add_test(tc_core, test_is_greater_ok64);
  tcase_add_test(tc_core, test_is_greater_ok65);
  tcase_add_test(tc_core, test_is_greater_ok66);
  tcase_add_test(tc_core, test_is_greater_ok67);
  tcase_add_test(tc_core, test_is_greater_ok68);
  tcase_add_test(tc_core, test_is_greater_ok69);
  tcase_add_test(tc_core, test_is_greater_ok70);
  tcase_add_test(tc_core, test_is_greater_ok71);
  tcase_add_test(tc_core, test_is_greater_ok72);
  tcase_add_test(tc_core, test_is_greater_ok73);
  tcase_add_test(tc_core, test_is_greater_ok74);
  tcase_add_test(tc_core, test_is_greater_ok75);
  tcase_add_test(tc_core, test_is_greater_ok76);
  tcase_add_test(tc_core, test_is_greater_ok77);
  tcase_add_test(tc_core, test_is_greater_ok78);
  tcase_add_test(tc_core, test_is_greater_ok79);
  tcase_add_test(tc_core, test_is_greater_ok80);
  tcase_add_test(tc_core, test_is_greater_ok81);
  tcase_add_test(tc_core, test_is_greater_ok82);
  tcase_add_test(tc_core, test_is_greater_ok83);
  tcase_add_test(tc_core, test_is_greater_ok84);
  tcase_add_test(tc_core, test_is_greater_ok85);
  tcase_add_test(tc_core, test_is_greater_ok86);
  tcase_add_test(tc_core, test_is_greater_ok87);
  tcase_add_test(tc_core, test_is_greater_ok88);
  tcase_add_test(tc_core, test_is_greater_ok89);
  tcase_add_test(tc_core, test_is_greater_ok90);
  tcase_add_test(tc_core, test_is_greater_ok91);
  tcase_add_test(tc_core, test_is_greater_ok92);
  tcase_add_test(tc_core, test_is_greater_ok93);
  tcase_add_test(tc_core, test_is_greater_ok94);
  tcase_add_test(tc_core, test_is_greater_ok95);
  tcase_add_test(tc_core, test_is_greater_ok96);
  tcase_add_test(tc_core, test_is_greater_ok97);
  tcase_add_test(tc_core, test_is_greater_ok98);
  tcase_add_test(tc_core, test_is_greater_ok99);
  tcase_add_test(tc_core, test_is_greater_ok100);
  tcase_add_test(tc_core, test_is_greater_ok101);
  tcase_add_test(tc_core, test_is_greater_ok102);
  tcase_add_test(tc_core, test_is_greater_ok103);
  tcase_add_test(tc_core, test_is_greater_ok104);
  tcase_add_test(tc_core, test_is_greater_ok105);
  tcase_add_test(tc_core, test_is_greater_ok106);
  tcase_add_test(tc_core, test_is_greater_ok107);
  tcase_add_test(tc_core, test_is_greater_ok108);
  tcase_add_test(tc_core, test_is_greater_ok109);
  tcase_add_test(tc_core, test_is_greater_ok110);
  tcase_add_test(tc_core, test_is_greater_ok111);
  tcase_add_test(tc_core, test_is_greater_ok112);
  tcase_add_test(tc_core, test_is_greater_ok113);
  tcase_add_test(tc_core, test_is_greater_ok114);
  tcase_add_test(tc_core, test_is_greater_ok115);
  tcase_add_test(tc_core, test_is_greater_ok116);
  tcase_add_test(tc_core, test_is_greater_ok117);
  tcase_add_test(tc_core, test_is_greater_ok118);
  tcase_add_test(tc_core, test_is_greater_ok119);
  tcase_add_test(tc_core, test_is_greater_ok120);
  tcase_add_test(tc_core, test_is_greater_ok121);
  tcase_add_test(tc_core, test_is_greater_ok122);
  tcase_add_test(tc_core, test_is_greater_ok123);
  tcase_add_test(tc_core, test_is_greater_ok124);
  tcase_add_test(tc_core, test_is_greater_ok125);
  tcase_add_test(tc_core, test_is_greater_ok126);
  tcase_add_test(tc_core, test_is_greater_ok127);
  tcase_add_test(tc_core, test_is_greater_ok128);
  tcase_add_test(tc_core, test_is_greater_ok129);
  tcase_add_test(tc_core, test_is_greater_ok130);
  tcase_add_test(tc_core, test_is_greater_ok131);
  tcase_add_test(tc_core, test_is_greater_ok132);
  tcase_add_test(tc_core, test_is_greater_ok133);
  tcase_add_test(tc_core, test_is_greater_ok134);
  tcase_add_test(tc_core, test_is_greater_ok135);
  tcase_add_test(tc_core, test_is_greater_ok136);
  tcase_add_test(tc_core, test_is_greater_ok137);
  tcase_add_test(tc_core, test_is_greater_ok138);
  tcase_add_test(tc_core, test_is_greater_ok139);
  tcase_add_test(tc_core, test_is_greater_ok140);
  tcase_add_test(tc_core, test_is_greater_ok141);
  tcase_add_test(tc_core, test_is_greater_ok142);
  tcase_add_test(tc_core, test_is_greater_ok143);
  tcase_add_test(tc_core, test_is_greater_ok144);
  tcase_add_test(tc_core, test_is_greater_ok145);
  tcase_add_test(tc_core, test_is_greater_ok146);
  tcase_add_test(tc_core, test_is_greater_ok147);
  tcase_add_test(tc_core, test_is_greater_ok148);
  tcase_add_test(tc_core, test_is_greater_ok149);
  tcase_add_test(tc_core, test_is_greater_ok150);
  tcase_add_test(tc_core, test_is_greater_ok151);
  tcase_add_test(tc_core, test_is_greater_ok152);
  tcase_add_test(tc_core, test_is_greater_ok153);
  tcase_add_test(tc_core, test_is_greater_ok154);
  tcase_add_test(tc_core, test_is_greater_ok155);
  tcase_add_test(tc_core, test_is_greater_ok156);
  tcase_add_test(tc_core, test_is_greater_ok157);
  tcase_add_test(tc_core, test_is_greater_ok158);
  tcase_add_test(tc_core, test_is_greater_ok159);
  tcase_add_test(tc_core, test_is_greater_ok160);
  tcase_add_test(tc_core, test_is_greater_ok161);
  tcase_add_test(tc_core, test_is_greater_ok162);
  tcase_add_test(tc_core, test_is_greater_ok163);
  tcase_add_test(tc_core, test_is_greater_ok164);
  tcase_add_test(tc_core, test_is_greater_ok165);
  tcase_add_test(tc_core, test_is_greater_ok166);
  tcase_add_test(tc_core, test_is_greater_ok167);
  tcase_add_test(tc_core, test_is_greater_ok168);
  tcase_add_test(tc_core, test_is_greater_ok169);
  tcase_add_test(tc_core, test_is_greater_ok170);
  tcase_add_test(tc_core, test_is_greater_ok171);
  tcase_add_test(tc_core, test_is_greater_ok172);
  tcase_add_test(tc_core, test_is_greater_ok173);
  tcase_add_test(tc_core, test_is_greater_ok174);
  tcase_add_test(tc_core, test_is_greater_ok175);
  tcase_add_test(tc_core, test_is_greater_ok176);
  tcase_add_test(tc_core, test_is_greater_ok177);
  tcase_add_test(tc_core, test_is_greater_ok178);
  tcase_add_test(tc_core, test_is_greater_ok179);
  tcase_add_test(tc_core, test_is_greater_ok180);
  tcase_add_test(tc_core, test_is_greater_ok181);
  tcase_add_test(tc_core, test_is_greater_ok182);
  tcase_add_test(tc_core, test_is_greater_ok183);
  tcase_add_test(tc_core, test_is_greater_ok184);
  tcase_add_test(tc_core, test_is_greater_ok185);
  tcase_add_test(tc_core, test_is_greater_ok186);
  tcase_add_test(tc_core, test_is_greater_ok187);
  tcase_add_test(tc_core, test_is_greater_ok188);
  tcase_add_test(tc_core, test_is_greater_ok189);
  tcase_add_test(tc_core, test_is_greater_ok190);
  tcase_add_test(tc_core, test_is_greater_ok191);
  tcase_add_test(tc_core, test_is_greater_ok192);
  tcase_add_test(tc_core, test_is_greater_ok193);
  tcase_add_test(tc_core, test_is_greater_ok194);
  tcase_add_test(tc_core, test_is_greater_ok195);
  tcase_add_test(tc_core, test_is_greater_ok196);
  tcase_add_test(tc_core, test_is_greater_ok197);
  tcase_add_test(tc_core, test_is_greater_ok198);
  tcase_add_test(tc_core, test_is_greater_ok199);
  tcase_add_test(tc_core, test_is_greater_ok200);
  tcase_add_test(tc_core, test_is_greater_ok201);
  tcase_add_test(tc_core, test_is_greater_ok202);
  tcase_add_test(tc_core, test_is_greater_ok203);
  tcase_add_test(tc_core, test_is_greater_ok204);
  tcase_add_test(tc_core, test_is_greater_ok205);
  tcase_add_test(tc_core, test_is_greater_ok206);
  tcase_add_test(tc_core, test_is_greater_ok207);
  tcase_add_test(tc_core, test_is_greater_ok208);
  tcase_add_test(tc_core, test_is_greater_ok209);
  tcase_add_test(tc_core, test_is_greater_ok210);
  tcase_add_test(tc_core, test_is_greater_ok211);
  tcase_add_test(tc_core, test_is_greater_ok212);
  tcase_add_test(tc_core, test_is_greater_ok213);
  tcase_add_test(tc_core, test_is_greater_ok214);
  tcase_add_test(tc_core, test_is_greater_ok215);
  tcase_add_test(tc_core, test_is_greater_ok216);
  tcase_add_test(tc_core, test_is_greater_ok217);
  tcase_add_test(tc_core, test_is_greater_ok218);
  tcase_add_test(tc_core, test_is_greater_ok219);
  tcase_add_test(tc_core, test_is_greater_ok220);
  tcase_add_test(tc_core, test_is_greater_ok221);
  tcase_add_test(tc_core, test_is_greater_ok222);
  tcase_add_test(tc_core, test_is_greater_ok223);
  tcase_add_test(tc_core, test_is_greater_ok224);
  tcase_add_test(tc_core, test_is_greater_ok225);
  tcase_add_test(tc_core, test_is_greater_ok226);
  tcase_add_test(tc_core, test_is_greater_ok227);
  tcase_add_test(tc_core, test_is_greater_ok228);
  tcase_add_test(tc_core, test_is_greater_ok229);
  tcase_add_test(tc_core, test_is_greater_ok230);
  tcase_add_test(tc_core, test_is_greater_ok231);
  tcase_add_test(tc_core, test_is_greater_ok232);
  tcase_add_test(tc_core, test_is_greater_ok233);
  tcase_add_test(tc_core, test_is_greater_ok234);
  tcase_add_test(tc_core, test_is_greater_ok235);
  tcase_add_test(tc_core, test_is_greater_ok236);
  tcase_add_test(tc_core, test_is_greater_ok237);
  tcase_add_test(tc_core, test_is_greater_ok238);
  tcase_add_test(tc_core, test_is_greater_ok239);
  tcase_add_test(tc_core, test_is_greater_ok240);
  tcase_add_test(tc_core, test_is_greater_ok241);
  tcase_add_test(tc_core, test_is_greater_ok242);
  tcase_add_test(tc_core, test_is_greater_ok243);
  tcase_add_test(tc_core, test_is_greater_ok244);
  tcase_add_test(tc_core, test_is_greater_ok245);
  tcase_add_test(tc_core, test_is_greater_ok246);
  tcase_add_test(tc_core, test_is_greater_ok247);
  tcase_add_test(tc_core, test_is_greater_ok248);
  tcase_add_test(tc_core, test_is_greater_ok249);
  tcase_add_test(tc_core, test_is_greater_ok250);
  tcase_add_test(tc_core, test_is_greater_ok251);
  tcase_add_test(tc_core, test_is_greater_ok252);
  tcase_add_test(tc_core, test_is_greater_ok253);
  tcase_add_test(tc_core, test_is_greater_ok254);
  tcase_add_test(tc_core, test_is_greater_ok255);
  tcase_add_test(tc_core, test_is_greater_ok256);
  tcase_add_test(tc_core, test_is_greater_ok257);
  tcase_add_test(tc_core, test_is_greater_ok258);
  tcase_add_test(tc_core, test_is_greater_ok259);
  tcase_add_test(tc_core, test_is_greater_ok260);
  tcase_add_test(tc_core, test_is_greater_ok261);
  tcase_add_test(tc_core, test_is_greater_ok262);
  tcase_add_test(tc_core, test_is_greater_ok263);
  tcase_add_test(tc_core, test_is_greater_ok264);
  tcase_add_test(tc_core, test_is_greater_ok265);
  tcase_add_test(tc_core, test_is_greater_ok266);
  tcase_add_test(tc_core, test_is_greater_ok267);
  tcase_add_test(tc_core, test_is_greater_ok268);
  tcase_add_test(tc_core, test_is_greater_ok269);
  tcase_add_test(tc_core, test_is_greater_ok270);
  tcase_add_test(tc_core, test_is_greater_ok271);
  tcase_add_test(tc_core, test_is_greater_ok272);
  tcase_add_test(tc_core, test_is_greater_ok273);
  tcase_add_test(tc_core, test_is_greater_ok274);
  tcase_add_test(tc_core, test_is_greater_ok275);
  tcase_add_test(tc_core, test_is_greater_ok276);
  tcase_add_test(tc_core, test_is_greater_ok277);
  tcase_add_test(tc_core, test_is_greater_ok278);
  tcase_add_test(tc_core, test_is_greater_ok279);
  tcase_add_test(tc_core, test_is_greater_ok280);
  tcase_add_test(tc_core, test_is_greater_ok281);
  tcase_add_test(tc_core, test_is_greater_ok282);
  tcase_add_test(tc_core, test_is_greater_ok283);
  tcase_add_test(tc_core, test_is_greater_ok284);
  tcase_add_test(tc_core, test_is_greater_ok285);
  tcase_add_test(tc_core, test_is_greater_ok286);
  tcase_add_test(tc_core, test_is_greater_ok287);
  tcase_add_test(tc_core, test_is_greater_ok288);
  tcase_add_test(tc_core, test_is_greater_ok289);
  tcase_add_test(tc_core, test_is_greater_ok290);
  tcase_add_test(tc_core, test_is_greater_ok291);
  tcase_add_test(tc_core, test_is_greater_ok292);
  tcase_add_test(tc_core, test_is_greater_ok293);
  tcase_add_test(tc_core, test_is_greater_ok294);
  tcase_add_test(tc_core, test_is_greater_ok295);
  tcase_add_test(tc_core, test_is_greater_ok296);
  tcase_add_test(tc_core, test_is_greater_ok297);
  tcase_add_test(tc_core, test_is_greater_ok298);
  tcase_add_test(tc_core, test_is_greater_ok299);
  tcase_add_test(tc_core, test_is_greater_ok300);
  tcase_add_test(tc_core, test_is_greater_ok301);
  tcase_add_test(tc_core, test_is_greater_ok302);
  tcase_add_test(tc_core, test_is_greater_ok303);
  tcase_add_test(tc_core, test_is_greater_ok304);
  tcase_add_test(tc_core, test_is_greater_ok305);
  tcase_add_test(tc_core, test_is_greater_ok306);
  tcase_add_test(tc_core, test_is_greater_ok307);
  tcase_add_test(tc_core, test_is_greater_ok308);
  tcase_add_test(tc_core, test_is_greater_ok309);
  tcase_add_test(tc_core, test_is_greater_ok310);
  tcase_add_test(tc_core, test_is_greater_ok311);
  tcase_add_test(tc_core, test_is_greater_ok312);
  tcase_add_test(tc_core, test_is_greater_ok313);
  tcase_add_test(tc_core, test_is_greater_ok314);
  tcase_add_test(tc_core, test_is_greater_ok315);
  tcase_add_test(tc_core, test_is_greater_ok316);
  tcase_add_test(tc_core, test_is_greater_ok317);
  tcase_add_test(tc_core, test_is_greater_ok318);
  tcase_add_test(tc_core, test_is_greater_ok319);
  tcase_add_test(tc_core, test_is_greater_ok320);
  tcase_add_test(tc_core, test_is_greater_ok321);
  tcase_add_test(tc_core, test_is_greater_ok322);
  tcase_add_test(tc_core, test_is_greater_ok323);
  tcase_add_test(tc_core, test_is_greater_ok324);
  tcase_add_test(tc_core, test_is_greater_ok325);
  tcase_add_test(tc_core, test_is_greater_ok326);
  tcase_add_test(tc_core, test_is_greater_ok327);
  tcase_add_test(tc_core, test_is_greater_ok328);
  tcase_add_test(tc_core, test_is_greater_ok329);
  tcase_add_test(tc_core, test_is_greater_ok330);
  tcase_add_test(tc_core, test_is_greater_ok331);
  tcase_add_test(tc_core, test_is_greater_ok332);
  tcase_add_test(tc_core, test_is_greater_ok333);
  tcase_add_test(tc_core, test_is_greater_ok334);
  tcase_add_test(tc_core, test_is_greater_ok335);
  tcase_add_test(tc_core, test_is_greater_ok336);
  tcase_add_test(tc_core, test_is_greater_ok337);
  tcase_add_test(tc_core, test_is_greater_ok338);
  tcase_add_test(tc_core, test_is_greater_ok339);
  tcase_add_test(tc_core, test_is_greater_ok340);
  tcase_add_test(tc_core, test_is_greater_ok341);
  tcase_add_test(tc_core, test_is_greater_ok342);
  tcase_add_test(tc_core, test_is_greater_ok343);
  tcase_add_test(tc_core, test_is_greater_ok344);
  tcase_add_test(tc_core, test_is_greater_ok345);
  tcase_add_test(tc_core, test_is_greater_ok346);
  tcase_add_test(tc_core, test_is_greater_ok347);
  tcase_add_test(tc_core, test_is_greater_ok348);
  tcase_add_test(tc_core, test_is_greater_ok349);
  tcase_add_test(tc_core, test_is_greater_ok350);
  tcase_add_test(tc_core, test_is_greater_ok351);
  tcase_add_test(tc_core, test_is_greater_ok352);
  tcase_add_test(tc_core, test_is_greater_ok353);
  tcase_add_test(tc_core, test_is_greater_ok354);
  tcase_add_test(tc_core, test_is_greater_ok355);
  tcase_add_test(tc_core, test_is_greater_ok356);
  tcase_add_test(tc_core, test_is_greater_ok357);
  tcase_add_test(tc_core, test_is_greater_ok358);
  tcase_add_test(tc_core, test_is_greater_ok359);
  tcase_add_test(tc_core, test_is_greater_ok360);
  tcase_add_test(tc_core, test_is_greater_ok361);
  tcase_add_test(tc_core, test_is_greater_ok362);
  tcase_add_test(tc_core, test_is_greater_ok363);
  tcase_add_test(tc_core, test_is_greater_ok364);
  tcase_add_test(tc_core, test_is_greater_ok365);
  tcase_add_test(tc_core, test_is_greater_ok366);
  tcase_add_test(tc_core, test_is_greater_ok367);
  tcase_add_test(tc_core, test_is_greater_ok368);
  tcase_add_test(tc_core, test_is_greater_ok369);
  tcase_add_test(tc_core, test_is_greater_ok370);
  tcase_add_test(tc_core, test_is_greater_ok371);
  tcase_add_test(tc_core, test_is_greater_ok372);
  tcase_add_test(tc_core, test_is_greater_ok373);
  tcase_add_test(tc_core, test_is_greater_ok374);
  tcase_add_test(tc_core, test_is_greater_ok375);
  tcase_add_test(tc_core, test_is_greater_ok376);
  tcase_add_test(tc_core, test_is_greater_ok377);
  tcase_add_test(tc_core, test_is_greater_ok378);
  tcase_add_test(tc_core, test_is_greater_ok379);
  tcase_add_test(tc_core, test_is_greater_ok380);
  tcase_add_test(tc_core, test_is_greater_ok381);
  tcase_add_test(tc_core, test_is_greater_ok382);
  tcase_add_test(tc_core, test_is_greater_ok383);
  tcase_add_test(tc_core, test_is_greater_ok384);
  tcase_add_test(tc_core, test_is_greater_ok385);
  tcase_add_test(tc_core, test_is_greater_ok386);
  tcase_add_test(tc_core, test_is_greater_ok387);
  tcase_add_test(tc_core, test_is_greater_ok388);
  tcase_add_test(tc_core, test_is_greater_ok389);
  tcase_add_test(tc_core, test_is_greater_ok390);
  tcase_add_test(tc_core, test_is_greater_ok391);
  tcase_add_test(tc_core, test_is_greater_ok392);
  tcase_add_test(tc_core, test_is_greater_ok393);
  tcase_add_test(tc_core, test_is_greater_ok394);
  tcase_add_test(tc_core, test_is_greater_ok395);
  tcase_add_test(tc_core, test_is_greater_ok396);
  tcase_add_test(tc_core, test_is_greater_ok397);
  tcase_add_test(tc_core, test_is_greater_ok398);
  tcase_add_test(tc_core, test_is_greater_ok399);
  tcase_add_test(tc_core, test_is_greater_ok400);

  suite_add_tcase(s, tc_core);
  return s;
}
void test_is_greater(s21_decimal decimal1, s21_decimal decimal2, int check) {
  int code = s21_is_greater(decimal1, decimal2);

  ck_assert_int_eq(code, check);
}
