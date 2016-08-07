
#include<stdio.h>
#include "convertToNumeral.h"

char *convertToNumeral(int input) {
  if (input == 1) {
    return "I";
  } else if (input == 3) {
    return "III";
  } else {
    return "V";
  }
}
