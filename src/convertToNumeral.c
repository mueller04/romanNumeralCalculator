
#include<stdio.h>
#include "convertToNumeral.h"

const int convertToNumeral(char* buf, int input) {

  int charIndex = 0;
  while (input > 0) {
    if (input >= 1000) {
      buf[charIndex] = 'M';
      input -= 1000;
    } else if(input >= 900) {
      buf[charIndex] = 'C';
      charIndex++;
      buf[charIndex] = 'M';
      input -= 900;
    } else if (input >= 500) {
      buf[charIndex] = 'D';
      input -= 500;
    } else if (input >= 100) {
      buf[charIndex] = 'C';
      input -= 100;
    } else if (input >= 50) {
      buf[charIndex] = 'L';
      input -= 50;
    } else if (input >= 40) {
      buf[charIndex] = 'X';
      charIndex++;
      buf[charIndex] = 'L';
      input -= 40;
    } else if (input >= 10) {
      buf[charIndex] = 'X';
      input -= 10;
    } else if (input >= 9) {
      buf[charIndex] = 'I';
      charIndex++;
      buf[charIndex] = 'X';
      input -= 9;
    } else if (input >= 5) {
      buf[charIndex] = 'V';
      input -= 5;
    } else if (input >= 4) {
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
