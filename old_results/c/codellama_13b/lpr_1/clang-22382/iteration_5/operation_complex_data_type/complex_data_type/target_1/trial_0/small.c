
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(int i, long j, int k) {
  while (1) {
    i = i;
    j = j;
    k = k;
  }
}

int fn2(int i, long j, int k, int i2, long j2, int k2) {
  struct h p;
  struct h r;
  fn1(i, j, k);
  while (1) {
    i = i2;
    j = j2;
    k = k2;
    i2 = i;
    j2 = j;
    k2 = k;
  }
}

int main() {}
