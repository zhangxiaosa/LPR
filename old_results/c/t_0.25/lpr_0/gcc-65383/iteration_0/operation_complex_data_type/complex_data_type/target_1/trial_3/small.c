#include <stdio.h>

unsigned g;
int h0 = 0x92A1D2CDL;
int h1 = 0x92A1D2CDL;
int h2 = 0x92A1D2CDL;
static unsigned i = 0x06D7L;

int main() {
  int r[5][9][5];
  g = r[i][i][i];
}