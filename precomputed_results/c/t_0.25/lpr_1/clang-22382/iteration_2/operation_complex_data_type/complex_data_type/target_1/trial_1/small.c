#include <stdio.h>

struct h {
  int i;
  long j;
  int k;
};

static int fn1_i(int p5_i) {
  return p5_i;
}

static long fn1_j(long p5_j) {
  return p5_j;
}

static int fn1_k(int p5_k) {
  return p5_k;
}

static void fn1(int p5_i, long p5_j, int p5_k) {
  p5_i;
  p5_j;
  p5_k;
w:
  goto w;
}

unsigned int fn2() {
  int p_i;
  long p_j;
  int p_k;
  
  fn1(p_i, p_j, p_k);
  
  for (;;) {
    int r_i;
    long r_j;
    int r_k;
    
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {
  return 0;
}