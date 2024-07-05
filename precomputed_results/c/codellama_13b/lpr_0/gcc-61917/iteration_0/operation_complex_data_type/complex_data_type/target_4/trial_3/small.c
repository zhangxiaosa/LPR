
#include <stdio.h>

void fn3(unsigned int p1) {
  unsigned int o = 0x4FL;
  unsigned int l = 0;
  unsigned int k = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = 0;
    }
  }

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 8; j++) {
      p1 = fn2(o, p1);
      m[2][5] = p1;
    }
  }
}

int main() {
  unsigned int p1 = 0;
  fn3(p1);
  return 0;
}
