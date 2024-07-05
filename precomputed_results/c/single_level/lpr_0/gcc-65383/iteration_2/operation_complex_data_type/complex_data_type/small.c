#include <stdio.h>

unsigned g;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

unsigned fn2() {
  for (;;) {
    int r[5][9][5];
    int(*r_row)[5] = (int(*)[5])r;
    int *r_element = (int *)r_row;

    if (h2)
      return 0xC3L;

    g = *(r_element + i * 9 * 5 + i * 5 + i);
  }
}

int main() { fn2(); }