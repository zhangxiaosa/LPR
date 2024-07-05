#include <stdio.h>

unsigned j;
unsigned u;
int v_ab;
int v_q;
struct p {
  int ab;
  int q : 22;
};
struct p w = {0x1C87E74FL, 816};

int main() {
  int i;
  struct p a = {8L, 666};

  v_ab = w.ab;
  v_q = w.q;

  for (i = 0; i >= 0; i -= 1) {
    for (; u <= 1; u += 1) {
      a.ab = v_ab;
      a.q = v_q;
      v_ab = a.ab;
      v_q = a.q;
    }
  }

  for (i = 0; i < 1; i++) {
    j = v_q;
  }

  printf("checksum = %X\n", j);

  return 0;
}