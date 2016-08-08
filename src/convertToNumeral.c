
#include<stdio.h>
#include "convertToNumeral.h"

const int convertToNumeral(char* buf, int input) {

  int charIndex = 0;
  while (input > 0) {
    if (input >= 5) {
      buf[charIndex] = 'V';
      input -= 5;
    } else if (input == 4) {
        buf[charIndex] = 'I';
        charIndex++;
        buf[charIndex] = 'V';
        input -= 4;
    } else if (input <= 3) {
      buf[charIndex] = 'I';
      input -= 1;
    }
    charIndex++;
  }
  buf[charIndex] = '\0';
  return 0;
}
