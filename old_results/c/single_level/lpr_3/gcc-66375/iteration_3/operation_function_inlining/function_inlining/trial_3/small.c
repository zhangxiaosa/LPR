#include <stdio.h>

unsigned p;
unsigned t;
unsigned u;
unsigned v[1][4];

char fn2(char p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1 + p2;
}

void fn7(unsigned p1, char *p2, int p3) {
  p = p1;
}

int main() {
  int i, j;
  int f = 0;
  char a = 0xFBL;
  int b = 0L;

  for (u = 0; u < 51; ++u) {
    static unsigned e[9];
    int d = 2L;

    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;

    d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e[0]);
  }

  fn7(t, "g_1729[i][j]", f);

  printf("checksum = %X\n", p);
  return 0;
}