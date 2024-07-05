#include <stdio.h>

typedef unsigned f;
typedef struct {
  int ab;
  signed q : 22;
} p;

f u;
int v_ab;
signed v_q;

int w_ab;
signed w_q;

f j;

int main() {
  int i;
  signed p2;
  int a_ab;
  signed a_q;

  v_ab = w_ab;
  v_q = w_q;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a_ab = v_ab;
      a_q = v_q;
      v_ab = w_ab;
      v_q = w_q;
      v_ab = a_ab;
      v_q = a_q;
    }
  }

  for (i = 0; i < 1; i++) {
    j = v_q;
  }

  printf("checksum = %X\n", j);
  return 0;
}