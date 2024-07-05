#include <stdio.h>

unsigned g;
static unsigned i = 0x06D7L;

int main() {
  int r[5][9][5];
  for (;;) {
    g = r[i][i][i];
  }
}
