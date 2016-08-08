
#include<stdio.h>
#include "convert.h"
#include "convertToNumeral.h"

const int add(char* buf, char* num1, char* num2){
  convertToNumeral(buf, convertToInt(num1) + convertToInt(num2));
  return 0;
}

const int subtract(char* buf, char* num1, char* num2){
  convertToNumeral(buf, convertToInt(num1) - convertToInt(num2));
  return 0;
}
