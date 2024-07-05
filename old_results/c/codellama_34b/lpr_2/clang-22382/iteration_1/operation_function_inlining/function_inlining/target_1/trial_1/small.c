
int fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
}

int fn2(p1) {
  struct h p;
  p = r = p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
