
#include<stdio.h>
#include "convertToNumeral.h"
#include <string.h>

int addCharToBuffer(const int bufferSize, char* buf, int input_remaining, const int integer, const char* romanNumeral, const int romanNumeralSize) {

  int maxCharPosition = bufferSize - romanNumeralSize - 1;
  if (buf[maxCharPosition] == 0){
    strcat(buf, romanNumeral);
    input_remaining -= integer;
    return input_remaining;
  } else {
    return -1;
  }
}

int buildString(const int bufferSize, char* buf, int input_remaining) {
  if (input_remaining >= 1000) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 1000, "M", 1);
  } else if(input_remaining >= 900) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 900, "CM", 2);
  } else if (input_remaining >= 500) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 500, "D", 1);
  } else if (input_remaining >= 100) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 100, "C", 1);
  } else if (input_remaining >= 90) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 90, "XC", 2);
  } else if (input_remaining >= 50) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 50, "L", 1);
  } else if (input_remaining >= 40) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 40, "XL", 2);
  } else if (input_remaining >= 10) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 10, "X", 1);
  } else if (input_remaining >= 9) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 9, "IX", 2);
  } else if (input_remaining >= 5) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 5, "V", 1);
  } else if (input_remaining >= 4) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 4, "IV", 2);
  } else if (input_remaining <= 3) {
    input_remaining = addCharToBuffer(bufferSize, buf, input_remaining, 1, "I", 1);
  }
  return input_remaining;
}

int convertToNumeral(const int bufferSize, char* buf, int input) {

  if (input >= 4000 || input <= 0 || buf == NULL) {
    return -1;
  }

  while (input > 0) {
      input = buildString(bufferSize, buf, input);
      if (input == -1) {
        return -1;
      }
  }
  return 0;
}
