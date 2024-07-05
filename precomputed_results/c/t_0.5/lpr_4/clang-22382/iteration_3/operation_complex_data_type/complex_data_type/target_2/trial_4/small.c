#include <stdio.h>

int main() {
  int i;
  long j;
  int k;

  unsigned int p1;
  int p5_i;

  struct h {
    int i;
    long j;
    int k;
  };

  static struct h fn1(unsigned int p1, struct h p5) {
    int p5_i = p5.i;
  w:
    goto w;
  }

  unsigned int fn2() {
    struct h p;
    struct h r;
    fn1(0, p);
    for (;;) {
      p = r = p;
    }
  }

  return 0;
}