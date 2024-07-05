#include <stdio.h>

char fn2(char p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_00;

int main() {
  int d = 2L;

  for (; u < 51; u += 10) {
    int temp2_1 = fn2(v_00 = fn3(4L, d), 3);
    d = fn4(temp2_1, 0x9EE7F9D1C772505BLL);

    int temp2_2 = fn2(v_00 = fn3(4L, d), 3);
    d = fn4(temp2_2, 0x9EE7F9D1C772505BLL);

    int temp2_3 = fn2(v_00 = fn3(4L, d), 3);
    d = fn4(temp2_3, 0x9EE7F9D1C772505BLL);

    int temp2_4 = fn2(v_00 = fn3(4L, d), 3);
    d = fn4(temp2_4, 0x9EE7F9D1C772505BLL);

    int temp2_5 = fn2(v_00 = fn3(4L, d), 3);
    d = fn4(temp2_5, 0x9EE7F9D1C772505BLL);
  }

  printf("checksum = %X\n", v_00);

  return 0;
}