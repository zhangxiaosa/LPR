typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;

struct h {
  signed i;
  c j;
  unsigned k;
};

d l;

e fn2(p1) {
  struct h p;
  b q;

  // Inlined `fn1` function body
  p.k;
w:;
  goto w;

  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
