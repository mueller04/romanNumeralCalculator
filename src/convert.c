
#include<stdio.h>
#include "convert.h"

const char* convertToNumeral(int input) {
  return 'I';
}

int convert(char *romanNumeral)
{
  int tempValue = 0;
  int value = 0;
  int length = (int)strlen(romanNumeral);
  int i;
  for (i = 0; i < length; i++)
  {
    tempValue = getNumeralValue(romanNumeral[i]);

    if (i + 1 <= length) {
      int nextValue = getNumeralValue(romanNumeral[i + 1]);
      if (tempValue < nextValue) {
        value -= tempValue;
      } else {
        value += tempValue;
      }
    } else {
      value += tempValue;
    }
  }
  return value;
}

int getNumeralValue(char numeral)
{
  if (numeral == 'I'){
    return 1;
  } else if (numeral == 'V') {
    return 5;
  } else if (numeral == 'X') {
    return 10;
  } else if (numeral == 'L'){
    return 50;
  } else if (numeral == 'C') {
    return 100;
  } else if (numeral == 'D') {
    return 500;
  } else if (numeral == 'M'){
    return 1000;
  } else {
    return 0;
  }
}
