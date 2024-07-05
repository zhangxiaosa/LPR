#include<stdio.h>

struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
w:
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
