#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "../src/convert.h"
#include "../src/convertToNumeral.h"

START_TEST(convert_I_to_1)
{
  char *input = "I";
  int result = convert(input);
  ck_assert_int_eq(result, 1);
}
END_TEST

START_TEST(convert_V_to_5)
{
  int result = convert("V");
  ck_assert_int_eq(result, 5);
}
END_TEST

START_TEST(convert_X_to_10)
{
  int result = convert("X");
  ck_assert_int_eq(result, 10);
}
END_TEST

START_TEST(convert_L_to_50)
{
  int result = convert("L");
  ck_assert_int_eq(result, 50);
}
END_TEST

START_TEST(convert_C_to_100)
{
  int result = convert("C");
  ck_assert_int_eq(result, 100);
}
END_TEST

START_TEST(convert_D_to_500)
{
  int result = convert("D");
  ck_assert_int_eq(result, 500);
}
END_TEST

START_TEST(convert_M_to_1000)
{
  int result = convert("M");
  ck_assert_int_eq(result, 1000);
}
END_TEST

START_TEST(convert_T_to_0)
{
  int result = convert("T");
  ck_assert_int_eq(result, 0);
}
END_TEST

START_TEST(convert_VI_to_6)
{
  int result = convert("VI");
  ck_assert_int_eq(result, 6);
}
END_TEST

START_TEST(convert_III_to_3)
{
  int result = convert("III");
  ck_assert_int_eq(result, 3);
}
END_TEST

START_TEST(convert_VIII_to_8)
{
  int result = convert("VIII");
  ck_assert_int_eq(result, 8);
}
END_TEST

START_TEST(convert_IV_to_4)
{
  int result = convert("IV");
  ck_assert_int_eq(result, 4);
}
END_TEST

START_TEST(convert_IX_to_9)
{
  int result = convert("IX");
  ck_assert_int_eq(result, 9);
}
END_TEST

START_TEST(convert_CM_to_900)
{
  int result = convert("CM");
  ck_assert_int_eq(result, 900);
}
END_TEST

START_TEST(convert_XIV_to_14)
{
  int result = convert("XIV");
  ck_assert_int_eq(result, 14);
}
END_TEST

START_TEST(convert_LXXIV_to_74)
{
  int result = convert("XIV");
  ck_assert_int_eq(result, 14);
}
END_TEST

START_TEST(convert_1_to_I)
{
  char buf[16];
  int result = convertToNumeral(buf, 1);
  ck_assert_str_eq(buf, "I");
}
END_TEST

START_TEST(convert_3_to_III)
{
  char buf[16];
  int result = convertToNumeral(buf, 3);
  ck_assert_str_eq(buf, "III");
}
END_TEST

START_TEST(convert_5_to_V)
{
  char buf[16];
  int result = convertToNumeral(buf, 5);
  ck_assert_str_eq(buf, "V");
}
END_TEST

START_TEST(convert_4_to_IV)
{
  char buf[16];
  int result = convertToNumeral(buf, 4);
  ck_assert_str_eq(buf, "IV");
}
END_TEST

START_TEST(convert_10_to_X)
{
  char buf[16];
  int result = convertToNumeral(buf, 10);
  ck_assert_str_eq(buf, "X");
}
END_TEST

START_TEST(convert_9_to_IX)
{
  char buf[16];
  int result = convertToNumeral(buf, 9);
  ck_assert_str_eq(buf, "IX");
}
END_TEST

START_TEST(convert_50_to_L)
{
  char buf[16];
  int result = convertToNumeral(buf, 50);
  ck_assert_str_eq(buf, "L");
}
END_TEST

Suite * conversionTestsSuite(void) {
  Suite *conversionSuite = suite_create("Conversion Tests");
  TCase *convert = tcase_create("convert");
  tcase_add_test(convert, convert_I_to_1);
  tcase_add_test(convert, convert_V_to_5);
  tcase_add_test(convert, convert_X_to_10);
  tcase_add_test(convert, convert_L_to_50);
  tcase_add_test(convert, convert_C_to_100);
  tcase_add_test(convert, convert_D_to_500);
  tcase_add_test(convert, convert_M_to_1000);
  tcase_add_test(convert, convert_T_to_0);
  tcase_add_test(convert, convert_VI_to_6);
  tcase_add_test(convert, convert_III_to_3);
  tcase_add_test(convert, convert_VIII_to_8);
  tcase_add_test(convert, convert_IV_to_4);
  tcase_add_test(convert, convert_IX_to_9);
  tcase_add_test(convert, convert_CM_to_900);
  tcase_add_test(convert, convert_XIV_to_14);
  tcase_add_test(convert, convert_LXXIV_to_74);
  TCase *convertToNumeral = tcase_create("convert to numeral");
  tcase_add_test(convertToNumeral, convert_1_to_I);
  tcase_add_test(convertToNumeral, convert_3_to_III);
  tcase_add_test(convertToNumeral, convert_5_to_V);
  tcase_add_test(convertToNumeral, convert_4_to_IV);
  tcase_add_test(convertToNumeral, convert_10_to_X);
  tcase_add_test(convertToNumeral, convert_9_to_IX);
  tcase_add_test(convertToNumeral, convert_50_to_L);


  suite_add_tcase(conversionSuite, convert);
  suite_add_tcase(conversionSuite, convertToNumeral);

  return conversionSuite;
}

int main(void)
{
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = conversionTestsSuite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
