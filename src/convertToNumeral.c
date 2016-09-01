
#include<stdio.h>
#include "convertToNumeral.h"
#include <string.h>

int addCharToBuffer(char* buf, int input_remaining, const int integer, const char* romanNumeral) {
  strcat(buf, romanNumeral);
  input_remaining -= integer;
  return input_remaining;
}

int buildString(char* buf, int input_remaining) {
  if (input_remaining >= 1000) {
    input_remaining = addCharToBuffer(buf, input_remaining, 1000, "M");
  } else if(input_remaining >= 900) {
    input_remaining = addCharToBuffer(buf, input_remaining, 900, "CM");
  } else if (input_remaining >= 500) {
    input_remaining = addCharToBuffer(buf, input_remaining, 500, "D");
  } else if (input_remaining >= 100) {
    input_remaining = addCharToBuffer(buf, input_remaining, 100, "C");
  } else if (input_remaining >= 90) {
    input_remaining = addCharToBuffer(buf, input_remaining, 90, "XC");
  } else if (input_remaining >= 50) {
    input_remaining = addCharToBuffer(buf, input_remaining, 50, "L");
  } else if (input_remaining >= 40) {
    input_remaining = addCharToBuffer(buf, input_remaining, 40, "XL");
  } else if (input_remaining >= 10) {
    input_remaining = addCharToBuffer(buf, input_remaining, 10, "X");
  } else if (input_remaining >= 9) {
    input_remaining = addCharToBuffer(buf, input_remaining, 9, "IX");
  } else if (input_remaining >= 5) {
    input_remaining = addCharToBuffer(buf, input_remaining, 5, "V");
  } else if (input_remaining >= 4) {
    input_remaining = addCharToBuffer(buf, input_remaining, 4, "IV");
  } else if (input_remaining <= 3) {
    input_remaining = addCharToBuffer(buf, input_remaining, 1, "I");
  }
  return input_remaining;
}

const int convertToNumeral(char* buf, int input) {

  if (input >= 4000 || input <= 0) {
    return -1;
  }

  while (input > 0) {
      input = buildString(buf, input);
  }
  return 0;
}
