
#include<stdio.h>
#include "convert.h"
#include "convertToNumeral.h"

const int add(char* num1, char* num2, char* buf){
  int result = convertToNumeral(buf, convertToInt(num1) + convertToInt(num2));
  return result;
}

const int subtract(char* num1, char* num2, char* buf){
  int result = convertToNumeral(buf, convertToInt(num1) - convertToInt(num2));
  return result;
}
