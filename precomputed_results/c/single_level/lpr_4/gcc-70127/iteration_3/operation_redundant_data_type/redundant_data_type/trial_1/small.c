#include<stdio.h>

unsigned u;
struct { int ab; signed q : 22; } v[1];
struct { int ab; signed q : 22; } w = {0x1C87E74FL, 816};
unsigned j;

int main() {
  int i;
  struct { int ab; signed q : 22; } a = {8L, 666};
  
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  
  for (i = 0; i < 1; i++) {
    j = v[i].q;
  }
  
  printf("checksum = %X\n", j);
  return 0;
}