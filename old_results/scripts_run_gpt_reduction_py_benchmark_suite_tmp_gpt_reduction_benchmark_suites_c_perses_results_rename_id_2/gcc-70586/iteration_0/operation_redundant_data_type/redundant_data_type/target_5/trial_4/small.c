#include <stdio.h>

int fn2(int p1, unsigned int p2) { return p1; }

int fn3(int p1, int p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

unsigned int fn5(unsigned int p1, unsigned int p2) { return p1 + p2; }

unsigned int fn6(unsigned int p1, unsigned int p2) { return p1 - p2; }

int o;
int p;
short q;
static unsigned r = 0x2A52L;
unsigned int s = 0x03F238A4L;
unsigned int t[7][1];
int u[6];

static int fn8() {
  if (fn2(1, o)) {
  }
}

int main() {
  fn8();
}
