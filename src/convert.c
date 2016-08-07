
#include<stdio.h>
#include "convert.h"

int convert(char *romanNumeral)
{

  int value = 0;
  int length = (int)strlen(romanNumeral);
  int i;
  for (i = 0; i < length; i++)
  {
    value += getNumeralValue(romanNumeral[i]);
  }

  return value;


}

int getNumeralValue(char numeral)
{
  printf("%c\n", numeral);
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
