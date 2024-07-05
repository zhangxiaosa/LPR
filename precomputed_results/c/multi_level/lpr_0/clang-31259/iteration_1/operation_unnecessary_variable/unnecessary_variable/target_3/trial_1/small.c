#include <stdio.h>

int fn4(int _, int __) { return _; }

int s;
unsigned w;
int ad[][5][7] = {{8}, 8};
int af;

int main() {
  for (w = 1;;) {
    for (; af;)
      ;
    for (; af >= 0; af -= 1)
      ad[1][w][af] = fn4(1, 4294967295);
    break;
  }
  s ^= ad[1][1][0];
  printf("checksum = %X\n", s);
  return 0;
}