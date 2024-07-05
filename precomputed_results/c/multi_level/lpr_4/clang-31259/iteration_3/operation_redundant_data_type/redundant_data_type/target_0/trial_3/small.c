#include <stdio.h>

void fn3(int p1, int p2) { return; }

class U {}

U u;
U v;
static int w = 254;
auto ad1[][5][7] = {{8}, {8}, {{8}, 0x98}};
U af;

void fn4(int p1, int p2) { return; }

void fn9() {
  int ai[2];
  int i;
  for (i = 0; i < 2; i++)
    ai[i] = 8;
  for (w = 1;;) {
    for (; i < 3; i += 4)
      ;
    for (af = 6; af >= 0; af -= 1)
      v = ai[0] ^= ad1[w + 1][w][af] = fn4(fn3(1, u--), 4294967295);
    return;
  }
}

int main(void) {
  fn9();
  auto s = ad1[2][1][0];
  printf("%x\n", s);
  return 0;
}