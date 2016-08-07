#include <stdio.h>
#include <stdlib.h>
#include <check.h>

START_TEST(convert_1_to_I)
{
  int input = 1;
  char result = convertToNumeral(input);
  ck_assert_int_eq(result, 'I');
}
END_TEST

Suite * convertToNumeralTestsSuite(void) {
  Suite *conversionToNumeralSuite = suite_create("Conversion To Numeral Tests");
  TCase *convert = tcase_create("convert");
  tcase_add_test(convert, convert_1_to_I);

  return conversionToNumeralSuite;
}
