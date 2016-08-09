
#include<stdio.h>
#include "convertToNumeral.h"

static int charIndex = 0;

const int convertToNumeral(char* buf, int input) {

  if (input >= 4000) {
    return 1;
  }

  while (input > 0) {
    if (input >= 1000) {
      buf[charIndex] = 'M';
      input -= 1000;
    } else if(input >= 900) {
      deductLowerNumeralChars(buf, 'C', 'M');
      input -= 900;
    } else if (input >= 500) {
      buf[charIndex] = 'D';
      input -= 500;
    } else if (input >= 100) {
      buf[charIndex] = 'C';
      input -= 100;
    } else if (input >= 90) {
      deductLowerNumeralChars(buf, 'X', 'C');
      input -= 90;
    } else if (input >= 50) {
      buf[charIndex] = 'L';
      input -= 50;
    } else if (input >= 40) {
      deductLowerNumeralChars(buf, 'X', 'L');
      input -= 40;
    } else if (input >= 10) {
      buf[charIndex] = 'X';
      input -= 10;
    } else if (input >= 9) {
      deductLowerNumeralChars(buf, 'I', 'X');
      input -= 9;
    } else if (input >= 5) {
      buf[charIndex] = 'V';
      input -= 5;
    } else if (input >= 4) {
        deductLowerNumeralChars(buf, 'I', 'V');
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

void deductLowerNumeralChars(char* buf, char numeral1, char numeral2) {
  buf[charIndex] = numeral1;
  charIndex++;
  buf[charIndex] = numeral2;
}
