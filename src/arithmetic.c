
#include<stdio.h>
#include "convert.h"
#include "convertToNumeral.h"

int check_for_null(const char* num){
  if (num == NULL || num[0] == '\0'){
    return -1;
  } else {
    return 0;
  }
}

const int add(const char* num1, const char* num2, char* buf){
  int num1_is_null = check_for_null(num1);
  int num2_is_null = check_for_null(num2);
  if (num1_is_null || num2_is_null){
      return -1;
  }

  int result = convertToNumeral(16, buf, convertToInt(num1) + convertToInt(num2));
  return result;
}

const int subtract(const char* num1, const char* num2, char* buf){
  int num1_is_null = check_for_null(num1);
  int num2_is_null = check_for_null(num2);
  if (num1_is_null || num2_is_null){
      return -1;
  }

  int result = convertToNumeral(16, buf, convertToInt(num1) - convertToInt(num2));
  return result;
}
