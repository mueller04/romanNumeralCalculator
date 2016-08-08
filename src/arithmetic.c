
#include<stdio.h>
#include "convert.h"
#include "convertToNumeral.h"

const int add(char* buf, char* num1, char* num2){
  convertToNumeral(buf, convert(num1) + convert(num2));
  return 0;
}
