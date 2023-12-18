#include <stdio.h>

struct p {
  int ab;
  signed int q : 22;
};

int u;
int v_ab;
signed int v_q;
int w_ab;
signed int w_q;
signed int a_ab;
signed int a_q;
int j;

int main() {
  int a_ab = 8;
  signed int a_q = 666;
  struct p v[1];
  int i;

  u = 0;

  v_ab = w_ab = 0x1C87E74F;
  v_q = w_q = 816;

  a_ab = 8;
  a_q = 666;

  for (i = 0; u <= 1; i += 1) {
    a_ab = v_ab = w_ab;
    a_q = v_q = w_q;
    v_ab = a_ab;
    v_q = a_q;
    u = i + 1;
  }

  j = v_q;
  printf("checksum = %X\n", j);
  return 0;
}