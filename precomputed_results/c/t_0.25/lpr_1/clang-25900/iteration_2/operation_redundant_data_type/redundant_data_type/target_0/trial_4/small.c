unsigned fn1(p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
int r;
static signed s = -5L;
int t;
long fn4() {
  struct m p2 = {1957L};
  p2.o = (unsigned)fn1(5);
  long ae;
  ae = (long)p2.o;
  p2.o = (unsigned)r;
  r = t % (~(signed long)s / ae);
}
int main() { (void)fn4(); }