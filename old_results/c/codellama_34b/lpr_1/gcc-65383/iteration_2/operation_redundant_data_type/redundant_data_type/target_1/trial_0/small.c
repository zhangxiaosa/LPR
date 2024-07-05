
#include <stdio.h>

int g;
static int i = 0x06D7;

int fn2() {
  for (;;) {
    int r[5][9][5];
    g = r[i][i][i];
  }
}

int main() { fn2(); }
