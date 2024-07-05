
unsigned fn1(unsigned p1, int p2) { return p2; }
struct k {
  unsigned l;
};
struct m {
  signed n : 18;
  signed o : 1;
};
signed p;
struct k q;
int r;
static signed s = -5L;
int u;
signed fn2(signed, struct m, struct k, struct k, int);
signed fn4() {
  struct m z;
  z.o = fn1(0, 5);
  signed ae;
  int af = u;
  ae = z.o;
  z.o = u;
  r = af % (~s / ae);
  z.o;
}
int main() { fn4(); }
