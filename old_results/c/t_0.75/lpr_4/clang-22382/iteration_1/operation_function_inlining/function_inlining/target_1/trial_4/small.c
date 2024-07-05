#include<stdio.h>

struct h {
  int i;
  long j;
  int k;
};

void fn2() {
  struct h p;
  p.k;
  p = p;
}
