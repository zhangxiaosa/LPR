#include <stdio.h>

unsigned int j;
unsigned int u;

struct p {
  int ab;
  int q;
};

struct p {
  int ab;
  int q : 22;
};

struct p v[1];

struct p w = {
  0x1C87E74F,
  816
};

void print_checksum(int checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  struct p a = {
    8,
    666
  };

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  j = v[0].q;
  print_checksum(j);

  return 0;
}