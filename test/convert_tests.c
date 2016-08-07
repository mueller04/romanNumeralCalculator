#include <stdio.h>
#include <stdlib.h>
#include <check.h>
#include "../src/convert.h"

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
  suite_add_tcase(conversionSuite, convert);

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
