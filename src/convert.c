
#include<stdio.h>
#include "convert.h"

int convert(char *romanNumeral)
{

    printf("%c\n", *romanNumeral);
    if (*romanNumeral == 'I'){
      return 1;
    } else {
      return 5;
    }

}
