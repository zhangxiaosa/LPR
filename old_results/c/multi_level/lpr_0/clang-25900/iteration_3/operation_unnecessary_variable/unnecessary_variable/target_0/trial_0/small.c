int r;
int fn1(p2) { return p2; }
int fn4() {
  int ae;
  int o;
  o = fn1(5);
  ae = o;
  o = 0;
  r = r % (5 / ae);
  return o;
}
int main() { fn4(); }
