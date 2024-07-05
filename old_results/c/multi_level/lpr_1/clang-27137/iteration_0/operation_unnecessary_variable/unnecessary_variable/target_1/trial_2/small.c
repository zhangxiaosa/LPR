#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

short r;
char p;

int main() {
  int i;
  short o = r;
  int s = 1L;
  for (i = 0; i < 10; i++) {
    while (r > s)
      r -= 1;
  }
  
  if (p = r)
    ;
  fn1(p, 0);
  return 0;
}