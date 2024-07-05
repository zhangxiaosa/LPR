#include <stdio.h>

unsigned j;
unsigned u;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

int main() {
  p a = {8L, 666};

  u = 0;
  p temp;
  for (; u <= 1; u += 1) {
    temp.ab = w.ab;
    temp.q = w.q;

    v[0].ab = temp.ab;
    v[0].q = temp.q;
  }

  j = v[0].q;

  // Inlined printf
  unsigned temp_j = j;
  unsigned temp_f = (temp_j & 0xf0000000) >> 28;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = (temp_j & 0x0f000000) >> 24;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = (temp_j & 0x00f00000) >> 20;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = (temp_j & 0x000f0000) >> 16;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = (temp_j & 0x0000f000) >> 12;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = (temp_j & 0x00000f00) >> 8;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = (temp_j & 0x000000f0) >> 4;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  temp_f = temp_j & 0x0000000f;
  if (temp_f <= 9) {
    temp_f += '0';
  } else {
    temp_f += 'A' - 10;
  }
  putchar(temp_f);

  return 0;
}