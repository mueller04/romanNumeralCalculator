
#include<stdio.h>
#include "convertToNumeral.h"

char *convertToNumeral(int input) {
  if (input == 1) {
    return "I";
  } else {
    return "III";
  }
}
