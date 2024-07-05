typedef long original_c;
typedef unsigned original_d;
typedef unsigned original_e;
typedef unsigned original_f;
typedef unsigned original_g;
struct h {
  signed i;
  original_c j;
  unsigned k;
};
original_d l;
static struct h fn1(original_f, short, original_g, original_d, struct h);
original_e fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(original_f p1, short p2, original_g p3, original_d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}.