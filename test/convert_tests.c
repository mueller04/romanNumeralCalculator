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

START_TEST(convert_II_to_2)
{
  int result = convert("V");
  ck_assert_int_eq(result, 5);
}
END_TEST

Suite * conversionTestsSuite(void) {
  Suite *conversionSuite = suite_create("Conversion Tests");
  TCase *convert = tcase_create("convert");
  tcase_add_test(convert, convert_I_to_1);
  tcase_add_test(convert, convert_II_to_2);
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
