#include <stdio.h>

short p2;

int b;
long c;
unsigned int d;
unsigned int e;
unsigned int f;
unsigned int g;

int i;
long j;
unsigned int k;

unsigned int l;

struct h {
  int i;
  long j;
  unsigned int k;
};

unsigned int l;

static int fn1(unsigned int p1, short p2, unsigned int p3, unsigned int p4,
                int i, long j, unsigned int k) {
  k;
w:
  goto w;
}

unsigned int fn2(unsigned int p1) {
  int p_i;
  long p_j;
  unsigned int p_k;
  int q;
  fn1(q, l, p1, 3, p_i, p_j, p_k);
  for (;;) {
    int r_i;
    long r_j;
    unsigned int r_k;
    p_i = r_i = p_i;
    p_j = r_j = p_j;
    p_k = r_k = p_k;
  }
}

int main() {}
