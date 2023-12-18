#include <stdio.h>

short o;
short p;
short q;
static unsigned r = 0x2A52L;
unsigned s = 0x03F238A4L;
unsigned t[7][1];
int u[6];

short fn2(short p1, unsigned p2) { return p1; }

unsigned fn4(unsigned p1, int p2) {}

static int fn8() {
  if (fn7(1))
    ;
}

int main() { fn8(); }
