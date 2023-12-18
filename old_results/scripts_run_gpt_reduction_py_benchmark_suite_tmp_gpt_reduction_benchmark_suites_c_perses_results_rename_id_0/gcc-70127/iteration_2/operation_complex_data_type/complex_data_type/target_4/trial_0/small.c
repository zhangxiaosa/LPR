#include <stdio.h>

int ab_w = 0x1C87E74FL;
signed int q_w = 816;
int ab_a = 8L;
signed int q_a = 666;
int ab_v_0;
signed int q_v_0;

int main() {
  int u;

  int ab_a_previous;
  signed int q_a_previous;
  int ab_v_0_previous;
  signed int q_v_0_previous;

  u = 0;

  ab_a_previous = ab_a;
  q_a_previous = q_a;
  ab_v_0_previous = ab_v_0;
  q_v_0_previous = q_v_0;

  ab_a = ab_v_0 = ab_w;
  q_a = q_v_0 = q_w;

  ab_v_0 = ab_a;
  q_v_0 = q_a;

  int j = q_v_0;

  printf("checksum = %X\n", j);

  return 0;
}