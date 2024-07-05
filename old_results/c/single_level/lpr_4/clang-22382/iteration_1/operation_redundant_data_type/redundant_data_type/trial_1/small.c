#include <stdint.h>

struct h {
  signed i;
  long j;
  unsigned k;
};

uint32_t l;

static signed fn1(unsigned, short, unsigned, uint32_t, signed, long, unsigned);
uint32_t fn2(p1) {
  signed p;
  int q;
  fn1(q, l, p1, 3, p.i, p.j, p.k);
  
  for (;;) {
    signed r;
    p.i = r.i = p.i;
    p.j = r.j = p.j;
    p.k = r.k = p.k;
  }
}

static signed fn1(unsigned p1, short p2, unsigned p3, uint32_t p4, signed p5i, long p5j, unsigned p5k) {
  p5k;
w:
  goto w;
}

int main() {}