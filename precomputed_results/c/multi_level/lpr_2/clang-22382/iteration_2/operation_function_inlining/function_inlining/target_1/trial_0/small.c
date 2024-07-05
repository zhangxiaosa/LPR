typedef long long_type;
typedef unsigned unsigned_type;

struct h {
  int i;
  long_type j;
  unsigned_type k;
};

unsigned_type fn2(p1) {
  struct h p;

  // Inlined content of fn1:
  // p5.k; (statement removed)

w:
  goto w;
}
