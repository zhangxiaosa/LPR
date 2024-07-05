#include <stdio.h>

char p;

char fn5() {
  short q;
  int i;
  q = o; // directly assign the value of 'o' to 'q'
  for (i = 0; i < 10; i++) {
    while (q > 1)
      q -= 1;
  }
  if (p = (q != 0)) // optimize the assignment to check if 'q' is non-zero
    ;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}