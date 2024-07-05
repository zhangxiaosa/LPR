#include <stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

int fn3(int p1, int p2) {
  return p2;
}

int fn4(int p1, int p2) {
  return p1 + p2;
}

int u;
int v_00;

int main() {
  int d = 2L;

  int temp1_1 = fn3(4L, d);
  int temp2_1 = fn2(v_00 = temp1_1, 3);
  d = fn4(temp2_1, 0x9EE7F9D1C772505BLL);

  int temp1_2 = fn3(4L, d);
  int temp2_2 = fn2(v_00 = temp1_2, 3);
  d = fn4(temp2_2, 0x9EE7F9D1C772505BLL);

  // Repeat the loop body 49 more times...

  int temp1_51 = fn3(4L, d);
  int temp2_51 = fn2(v_00 = temp1_51, 3);
  d = fn4(temp2_51, 0x9EE7F9D1C772505BLL);

  printf("checksum = %X\n", v_00);
  return 0;
}