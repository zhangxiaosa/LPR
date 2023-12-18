#include <stdio.h>

struct h {
  int i;
  long j;
  unsigned k;
};

int fn2() {
  struct h p;
  unsigned p5_k;
  /* Inlined contents of fn1 */
  p5_k = p.k;
w:
  goto w;
  /* End of inlined contents of fn1 */

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {
  fn2();
  return 0;
}