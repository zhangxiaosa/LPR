#include <stdio.h>

int p;
int u;
int v[1][4];

int fn11() {
  int d = 2L;
  for (; u < 4; ++u) {
    int e0;
    int i;
    for (i = 0; i < 3; i += 3)
      e0 = 0x9EE7F9D1C772505BLL;
    v[0][3] = 4L;
  }
  return 0;
}

int main() {
  fn11();
  p = v[0][3];
  printf("checksum = %X\n", p);
  return 0;
}