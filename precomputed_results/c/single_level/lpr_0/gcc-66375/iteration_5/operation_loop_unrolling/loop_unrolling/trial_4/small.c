#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

short fn3(short p1, short p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_00;

short fn11() {
  int d = 2L;

  int e[9];
  int i;
  for (i = 0; i < 9; i++)
    e[i] = 0x9EE7F9D1C772505BLL;

  int temp1, temp2, temp3;

  temp1 = fn3(4L, d);
  temp2 = fn2(v_00 = temp1, 3);
  temp3 = fn4(temp2, e[0]);
  d = temp3;

  temp1 = fn3(4L, d);
  temp2 = fn2(v_00 = temp1, 3);
  temp3 = fn4(temp2, e[0]);
  d = temp3;

  // Repeat the above code for a total of 51 iterations
  // ...

  return 0L;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_00);
  return 0;
}