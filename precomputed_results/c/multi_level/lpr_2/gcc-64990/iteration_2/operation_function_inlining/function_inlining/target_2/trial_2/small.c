#include <stdio.h>

short g = 0x7EBAL;
unsigned h = 0xCAL;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn3() {
  int p1 = fn2(0);
  short p2 = 7;
  
  {
    p1 || (m[1][0][1] = p1);
    return 2;
  }
  
  return 0;
}

int main() {
  int p1 = fn2(0);
  short p2 = 7;
  
  {
    p1 || (m[1][0][1] = p1);
    return 2;
  }
}