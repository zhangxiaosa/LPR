typedef unsigned e;
typedef unsigned f;
typedef unsigned g;
struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;
e fn2(p1) {
  struct h p;
  fn1(l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
