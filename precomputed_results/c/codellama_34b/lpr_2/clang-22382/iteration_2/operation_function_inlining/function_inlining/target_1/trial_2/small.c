
struct h {
  int i;
  long j;
  int k;
};

int fn2(p1) {
  struct h p;
  p.k;
  return 0;
}

int main() {
  fn2(1);
  return 0;
}
