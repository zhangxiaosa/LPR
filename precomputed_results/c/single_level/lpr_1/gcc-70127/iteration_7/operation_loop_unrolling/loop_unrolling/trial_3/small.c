#include<stdio.h>

unsigned j;

struct p {
  int ab;
  signed q : 22;
};

unsigned u;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

int main() {
  j = w.q;
  printf("checksum = %X\n", j);
  return 0;
}