#include <stdio.h>

int main() {
  int ab = 8L;
  signed int q = 666;
  int u = 0;
  int w_ab = 0x1C87E74F;
  signed int w_q = 816;
  int a_ab, a_q;
  int v_ab, v_q;
  int j;

  a_ab = w_ab;
  a_q = w_q;
  v_ab = a_ab;
  v_q = a_q;
  j = v_q;

  printf("checksum = %X\n", j);
  return 0;
}