#include <stdio.h>

int i;
long j;
int k;

static void fn1() {
  int p5_k;
w:
  goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;
  
  fn1();
  
  for (;;) {
    int r1_i = p_i;
    long r1_j = p_j;
    int r1_k = p_k;
    
    p_i = r1_i;
    p_j = r1_j;
    p_k = r1_k;
  }
}

int main() {}
