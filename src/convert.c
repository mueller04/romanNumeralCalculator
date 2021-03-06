
#include<stdio.h>
#include<string.h>
#include "convert.h"

int subtract_from_value(int value, int tempValue){
  value -= (tempValue * 2);
  return value;
}

int charactersAreInvalid(const int length, const char *romanNumeral){
  if (romanNumeral == NULL) {
    return -1;
  }

  int charsValid = 0;
  int i;
  int value;
  for (i = 0; i < length; i++) {
    value = getNumeralValue(romanNumeral[i]);
    if (value == -1){
      charsValid = -1;
    }
  }
  return charsValid;
}

int convertToInt(const int length, const char *romanNumeral)
{

  if (charactersAreInvalid(length, romanNumeral)){
      return -1;
  }

  int tempValue = 0;
  int value = 0;
  int i;
  for (i = 0; i < length; i++)
  {
    tempValue = getNumeralValue(romanNumeral[i]);
    value += tempValue;

    if (i + 1 <= length) {
      int nextValue = getNumeralValue(romanNumeral[i + 1]);

      if (tempValue < nextValue) {
        value = subtract_from_value(value, tempValue);
      }
    }
  }

  return value;
}

int getNumeralValue(const char numeral)
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
    return -1;
  }
}
