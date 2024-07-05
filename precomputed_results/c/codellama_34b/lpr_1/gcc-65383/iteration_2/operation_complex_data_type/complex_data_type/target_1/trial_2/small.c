
#include <stdio.h>

int g;
int h0 = 0x92A1D2CD;
int fn2() {
  for (;;) {
    int r[5][9][5];
    if (h0)
      return 0xC3;
    int i = 0x06D7;
    g = r[i][i][i];
  }
}
int main() { fn2(); }

/*
The program is an infinite loop that keeps assigning the value of `h0` to `g`, which is not used anywhere in the program.
The only way to optimize this program is to remove the statement `g = r[i][i][i];` and replace it with a no-op statement like `continue;` or `break;`
*/

int g;
int h0 = 0x92A1D2CD;
int fn2() {
  for (;;) {
    int r[5][9][5];
    if (h0)
      return 0xC3;
    int i = 0x06D7;
    continue;
  }
}
int main() { fn2(); }
