#include <stdlib.h>
#include <check.h>
#include "convert_tests.h"
#include "convertToNumeral_tests.h"

int main(void)
{
  int number_failed;
  Suite *convertSuite = conversionTestsSuite();
  Suite *convertToNumeralSuite = convertToNumeralTestsSuite();
  SRunner *sr;

  sr = srunner_create(convertSuite);
  srunner_add_suite(sr, convertToNumeralSuite);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
