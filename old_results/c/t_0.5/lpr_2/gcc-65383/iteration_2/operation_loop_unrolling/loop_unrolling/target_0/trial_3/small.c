#include <stdio.h>

unsigned g;
unsigned h2 = 0x92A1D2CD;

int fn2() {
  unsigned r[5][9][5];

  if (h2)
    return 0xC3L;
  g = r[0x06D7][0x06D7][0x06D7];

  if (h2)
    return 0xC3L;
  g = r[0x06D7][0x06D7][0x06D7];

  // Duplicate the loop body more times if desired

  return 0xC3L;
}

int main() {
  fn2();
}