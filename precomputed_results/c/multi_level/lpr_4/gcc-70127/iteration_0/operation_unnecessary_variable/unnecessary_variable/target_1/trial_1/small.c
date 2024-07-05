#include <stdio.h>

unsigned j;
unsigned u;

struct p {
  int q : 22;
};

struct p v[1];

int main() {
  int i;
  struct p a;
  for (i = 0; i >= 0; i -= 1)
    for (; u <= 1; u += 1) {
      a = v[i];
      v[i] = a;
    }
  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}