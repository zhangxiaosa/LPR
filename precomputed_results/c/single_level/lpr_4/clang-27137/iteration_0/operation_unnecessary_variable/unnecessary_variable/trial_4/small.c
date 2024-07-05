#include <stdio.h>

unsigned h;

void fn2(int p1) {
  h = p1;
}

void fn3(int p1) {
  fn2(p1);
}

void fn4(unsigned p1, char* p2) {
  fn3(p1);
}

char p;

int main() {
  short q;
  q = p;

  if (p == q)
    ;

  fn4(p, "g_4689");

  printf("checksum = 0\n");
  return 0;
}