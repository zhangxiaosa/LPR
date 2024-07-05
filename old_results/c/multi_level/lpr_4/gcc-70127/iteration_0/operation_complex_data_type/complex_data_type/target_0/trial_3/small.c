#include<stdio.h>

struct p {
  int ab;
  int q : 22;
};

int main() {
  unsigned int j;
  unsigned int u;
  struct p {
    int ab;
    int q : 22;
  } v[1];
  struct p {
    int ab;
    int q : 22;
  } w = {0x1C87E74FL, 816};
  int i;
  struct p a = {8, 666};

  for (i = 0; i >= 0; i -= 1) {
    for (; u <= 1; u += 1) {
      a = v[i] = w;
      v[i] = a;
    }
  }

  for (i = 0; i < 1; i++) {
    j = v[i].q;
  }

  printf("checksum = %X\n", j);

  return 0;
}