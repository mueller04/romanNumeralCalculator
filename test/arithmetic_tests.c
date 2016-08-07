#include <stdio.h>
#include <stdlib.h>
#include <check.h>
//add include for file here

START_TEST(add_I_to_I_gets_2)
{
  char *input = "I";
  char *input2 = "I";
  int result = add(input, input2);
  ck_assert_int_eq(result, 2);
}
END_TEST

Suite * arithmeticTestsSuite(void) {
  Suite *arithmeticSuite = suite_create("Arithmetic Tests");
  TCase *add = tcase_create("add");
  tcase_add_test(add, add_I_to_I_gets_2);
  suite_add_tcase(arithmeticSuite, add);

  return arithmeticSuite;
}

int main(void)
{
  int number_failed;
  Suite *s;
  SRunner *sr;

  s = arithmeticTestsSuite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
