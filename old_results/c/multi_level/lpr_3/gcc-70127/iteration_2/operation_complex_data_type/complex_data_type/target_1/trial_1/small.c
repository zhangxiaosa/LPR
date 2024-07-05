#include <stdio.h>

unsigned u;

signed ab;
signed q;

#define V_SIZE 1
struct p {
  signed ab;
  signed q : 22;
};

struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a = {8, 666};
  signed v_ab;
  signed v_q;

  for (; u <= 1; u += 2) {
    a = v_ab = v_q = w_init;
    v_ab = a;
    v_q = a;

    a = v_ab = v_q = w_init;
    v_ab = a;
    v_q = a;
  }

  printf("checksum = %X\n", v_q);

  return 0;
}