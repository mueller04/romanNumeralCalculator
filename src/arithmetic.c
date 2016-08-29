
#include<stdio.h>
#include "convert.h"
#include "convertToNumeral.h"

const int add(char* num1, char* num2, char* buf){
  int is_null = check_for_null(num1, num2);
  if (is_null){
      return -1;
  }

  int result = convertToNumeral(buf, convertToInt(num1) + convertToInt(num2));
  return result;
}

const int subtract(char* num1, char* num2, char* buf){
    int is_null = check_for_null(num1, num2, buf);
    if (is_null){
        return -1;
    }

  int result = convertToNumeral(buf, convertToInt(num1) - convertToInt(num2));
  return result;
}

int check_for_null(char* num1, char* num2){
  if (num1[0] == '\0' || num2[0] == '\0' || num1 == NULL || num2 == NULL){
    return -1;
  } else {
    return 0;
  }
}
