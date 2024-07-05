#include <stdio.h>

char fn4(char p1, char p2) {
  return p1;
}

short v = 0;
short ac = 1;

int main() {
  // Loop unrolling iteration 1
  {
    int w = 3;
    if (250 == 250) {
      v = ac;
    }
  }

  // Loop unrolling iteration 2
  {
    int w = 2;
    if (250 == 250) {
      v = ac;
    }
  }

  // Loop unrolling iteration 3
  {
    int w = 1;
    if (250 == 250) {
      v = ac;
    }
  }

  printf("{\"checksum\": \"%X\"}\n", v);
  return 0;
}