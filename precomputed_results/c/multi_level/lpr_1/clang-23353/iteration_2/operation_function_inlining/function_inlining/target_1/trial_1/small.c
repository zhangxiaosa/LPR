#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

char i;
char *fn2(char *p2) {
  char h = 0;
  
  for (char p3 = 6; p3 != -7; p3--)
    h ^= (p3 * i) && 1L;
  
  return p2;
}

int main() {
  fn2(NULL);
  return 0;
}
