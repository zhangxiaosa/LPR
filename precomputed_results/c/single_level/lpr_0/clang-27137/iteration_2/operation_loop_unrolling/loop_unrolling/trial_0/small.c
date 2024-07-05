#include <stdio.h>

char p;

char fn5() {
  short q;
  short r = 0; // Replace 'o' with the intended value or declare 'o' before usage
  q = r;

  while (q > 1) {
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
    q -= 1;
  }

  p = q;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}