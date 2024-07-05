#include <stdio.h>

unsigned h;

void fn2(int p1) {
  h = q;
}

int main() {
  int q;
  int s = 1L;
  
  while (q > 1) {
    q -= 1;
  }
  
  while (q > 1) {
    q -= 1;
  }
  
  while (q > 1) {
    q -= 1;
  }
  
  while (q > 1) {
    q -= 1;
  }
  
  while (q > 1) {
    q -= 1;
  }
  
  while (q > 1) {
    q -= 1;
  }
  
  fn2(q);
  
  printf("checksum = %X\n", h);
  
  return 0;
}
