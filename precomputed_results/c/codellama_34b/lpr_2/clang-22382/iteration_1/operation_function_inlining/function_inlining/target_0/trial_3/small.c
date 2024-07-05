
struct h {
  int i;
  long j;
  int k;
};
int l;
int fn2(p1) {
  struct h p;
  p.k = p1;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
