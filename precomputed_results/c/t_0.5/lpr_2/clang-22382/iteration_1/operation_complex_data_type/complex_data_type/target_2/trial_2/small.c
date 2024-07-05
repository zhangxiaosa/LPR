#include <stdio.h>

unsigned int l;

struct h {
  signed int i;
  long int j;
  unsigned int k;
};

unsigned int fn2(unsigned int p1) {
  signed int p_i;
  long int p_j;
  unsigned int p_k;
  unsigned int r_i;
  long int r_j;
  unsigned int r_k;

  struct h p;
  p_i = p.i;
  p_j = p.j;
  p_k = p.k;

  unsigned int p1_i = p1.i;

  for (;;) {
    struct h r;
    r_i = r.i;
    r_j = r.j;
    r_k = r.k;
    p = r;
  }
}

int main() {}
