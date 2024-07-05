#include <stdio.h>

unsigned int j;
unsigned int u;
struct {
  int ab;
  signed int q : 22;
} p;

struct {
  int ab;
  signed int q : 22;
} w = {0x12345678, 999};

int main() {
  struct {
    int ab;
    signed int q : 22;
  } a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = w;
  }

  j = a.q;
  printf("checksum = %X\n", j);
  return 0;
}