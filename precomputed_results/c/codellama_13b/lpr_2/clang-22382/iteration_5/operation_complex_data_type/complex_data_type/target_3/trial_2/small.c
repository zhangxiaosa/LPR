
struct h {
  long i;
  int j;
  long k;
};

static struct h fn1(long i, int j, long k) {
  while (1)
    k;
}

unsigned fn2() {
  long i;
  int j;
  long k;
  fn1(i, j, k);
  while (1) {
    long r_i;
    int r_j;
    long r_k;
    i = r_i = i;
    j = r_j = j;
    k = r_k = k;
  }
}

int main() {}
