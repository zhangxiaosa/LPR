#include<stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned l;

unsigned fn2(p1) {
  struct h p;
  struct h r;
  for (;;) {
    p = r = p;
  }
}

int main() {}
