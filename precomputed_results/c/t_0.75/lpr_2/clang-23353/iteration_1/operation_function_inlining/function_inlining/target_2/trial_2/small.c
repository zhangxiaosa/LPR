#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

struct g {
  signed h;
};

struct g j;

int main() {
  struct g j;

  for (char p3 = 6; p3 != -7; p3--)
    j.h ^= p3 && 1L;

  return 0;
}