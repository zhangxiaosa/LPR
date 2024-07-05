#include <iostream>

int k;
unsigned l;
volatile unsigned m[5][8];
unsigned p1;
unsigned o;

int main() {
  for (; l >= 4; l -= 4) {
    k = 0;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
  }

  for (; l; l++) {
    k = 0;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
  }

  if (p1) {
    m[2][5];
  }

  return 0;
}