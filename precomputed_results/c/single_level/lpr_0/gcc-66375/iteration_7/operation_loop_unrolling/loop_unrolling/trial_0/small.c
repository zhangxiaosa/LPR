#include<stdio.h>

// Original function declarations
char fn2(char p1, int p2);
int fn3(int p1, int p2);
int fn4(int p1, int p2);

// Original variable declarations
int u;
int v_00;

int main() {
  int d = 2L;

  // Unrolled loop
  for (; u < 50; u += 2) {
    int temp1_1 = fn3(4L, d);
    int temp2_1 = fn2(v_00 = temp1_1, 3);
    d = fn4(temp2_1, 0x9EE7F9D1C772505BLL);

    int temp1_2 = fn3(4L, d);
    int temp2_2 = fn2(v_00 = temp1_2, 3);
    d = fn4(temp2_2, 0x9EE7F9D1C772505BLL);
  }

  // Remaining iteration for odd value of `u`
  if (u == 50) {
    int temp1_1 = fn3(4L, d);
    int temp2_1 = fn2(v_00 = temp1_1, 3);
    d = fn4(temp2_1, 0x9EE7F9D1C772505BLL);
  }

  printf("checksum = %X\n", v_00);
  return 0;
}