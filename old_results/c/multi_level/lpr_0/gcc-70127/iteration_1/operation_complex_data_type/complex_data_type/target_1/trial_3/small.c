#include <stdio.h>

struct p {
  int ab;
  signed int q;
};

int u;
int v_ab;
signed int v_q;
int w_ab = 0x1C87E74F;
signed int w_q = 816;

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a.ab = v_ab = w_ab;
    a.q = v_q = w_q;
    v_ab = a.ab;
    v_q = a.q;
  }

  signed int j = v_q;
  printf("checksum = %X\n", j);

  return 0;
}