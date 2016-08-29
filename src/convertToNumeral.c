
#include<stdio.h>
#include "convertToNumeral.h"
#include <string.h>

const int convertToNumeral(char* buf, int input) {

  if (input >= 4000 || input <= 0) {
    return 1;
  }

  while (input > 0) {
      input = addCharsToBuffer(buf, input);
  }
  return 0;
}

void lowerNumeralChars(char* buf, const char* numeral1, const char* numeral2) {
  strcat(buf, numeral1);
  strcat(buf, numeral2);
}

int addCharsToBuffer(char* buf, int input_remaining){
  if (input_remaining >= 1000) {
    strcat(buf, "M");
    input_remaining -= 1000;
  } else if(input_remaining >= 900) {
    lowerNumeralChars(buf, "C", "M");
    input_remaining -= 900;
  } else if (input_remaining >= 500) {
    strcat(buf, "D");
    input_remaining -= 500;
  } else if (input_remaining >= 100) {
    strcat(buf, "C");
    input_remaining -= 100;
  } else if (input_remaining >= 90) {
    lowerNumeralChars(buf, "X", "C");
    input_remaining -= 90;
  } else if (input_remaining >= 50) {
    strcat(buf, "L");
    input_remaining -= 50;
  } else if (input_remaining >= 40) {
    lowerNumeralChars(buf, "X", "L");
    input_remaining -= 40;
  } else if (input_remaining >= 10) {
    strcat(buf, "X");
    input_remaining -= 10;
  } else if (input_remaining >= 9) {
    lowerNumeralChars(buf, "I", "X");
    input_remaining -= 9;
  } else if (input_remaining >= 5) {
    strcat(buf, "V");
    input_remaining -= 5;
  } else if (input_remaining >= 4) {
    lowerNumeralChars(buf, "I", "V");
    input_remaining -= 4;
  } else if (input_remaining <= 3) {
    strcat(buf, "I");
    input_remaining -= 1;
  }
  return input_remaining;
}
