
#include<stdio.h>
#include "convert.h"

int convert(char *romanNumeral)
{

    printf("%c\n", *romanNumeral);
    if (*romanNumeral == 'I'){
      return 1;
    } else if (*romanNumeral == 'V') {
      return 5;
    } else if (*romanNumeral == 'X') {
      return 10;
    } else {
      return 50;
    }

}
