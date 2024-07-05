
struct h {
  long i;
  long j;
  long k;
};

static struct h fn1(int p1, int p2, int p3, struct h p4) {
  while (1)
    p4 = p4;
}

int fn2(int p1) {
  long i;
  long j;
  long k;
  struct h p;
  struct h r;
  fn1(0, p1, p1, p);
  while (1)
    i = j = k = p = r = p;
}

int main() {}
