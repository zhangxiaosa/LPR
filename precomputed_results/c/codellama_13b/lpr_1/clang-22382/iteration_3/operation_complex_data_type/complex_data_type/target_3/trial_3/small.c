
struct h {
  int i;
  long j;
  char k;
};

static struct h fn1(int i1, int i2, int i3, int i4) {
  while (1)
    i4 = i4;
}

int fn2(int p1) {
  struct h p;
  struct h r;
  fn1(0, p1, p1, &p);
  while (1)
    p = r = p;
}

int main() {}
