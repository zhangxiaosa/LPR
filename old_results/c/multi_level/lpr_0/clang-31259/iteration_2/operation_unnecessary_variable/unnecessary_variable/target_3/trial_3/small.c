#include <stdio.h>

int fn4(_) { return _; }

int main() {
  unsigned w;
  int ad[][5][7] = {{8}, 8};
  int af;
  int s = 0;

  w = 1;

  for (; af >= 0; af -= 1)
    ad[1][w][af] = fn4(4294967295);

  s = s ^ ad[1][1][0];

  printf("checksum = %X\n", s);

  return 0;
}