
#include <stdio.h>

int main() {
  struct h {
    signed i;
    long j;
    unsigned k;
  };

  static struct h fn1(struct h p5) {
    p5.k;
  }

  long fn2() {
    struct h p;
    fn1(p);
    for (;;) {
      struct h r;
      p = r = p;
    }
  }

  return 0;
}
