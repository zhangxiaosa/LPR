#include <stdio.h>

char p;

char fn5() {
  int i;

  for (i = 0; i < 10; i++)
    while (p > 1)
      p -= 1;
}

int main() {
  fn5();
  printf("checksum = %X\n", p);
  return 0;
}