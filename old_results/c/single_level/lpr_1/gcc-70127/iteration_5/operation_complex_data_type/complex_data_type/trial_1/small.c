#include <stdio.h>

unsigned j;

int p_ab;
int p_q_bitfield;

unsigned u;

int v_ab;
int v_q_bitfield;

int w_ab;
int w_q_bitfield;

int main() {
  int i;
  int a_ab;
  int a_q_bitfield;

  signed p2;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 2) {
      a_ab = w_ab;
      a_q_bitfield = w_q_bitfield;
      v_ab = a_ab;
      v_q_bitfield = a_q_bitfield;
    }
  }

  for (i = 0; i < 1; i++)
    j = v_ab | (v_q_bitfield << 22);

  printf("checksum = %X\n", j);

  return 0;
}