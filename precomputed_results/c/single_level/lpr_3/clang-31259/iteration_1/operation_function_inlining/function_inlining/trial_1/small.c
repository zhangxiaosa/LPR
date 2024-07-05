#include <stdio.h>

void fn1(int p1) {
  printf("checksum = %X\n", p1);
}

int main() {
  signed ad[7][5][7] = {{8}, {8}, {{8}, 0x98}};
  unsigned s;
  int aj = 0;

  // Function inlining of fn8
  unsigned u;
  int v;
  static unsigned w = 254U;

  unsigned p1;
  char* p2;
  int p3;
  s = s ^ p1;

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 7; k++) {
        p1 = ad[i][j][k];
        p2 = "g_643[i][j][k]";
        p3 = aj;

        // Function body inlined
        s = s ^ p1;
      }
    }
  }

  fn1(s);
  return 0;
}