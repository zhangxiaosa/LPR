
int i;
long j;
unsigned k;

static void fn1(int i, long j, unsigned k) {
  k;
w:;
  goto w;
}

long fn2() {
  int i;
  long j;
  unsigned k;
  fn1(i, j, k);
  for (;;) {
    int r;
    i = r = i;
  }
}

int main() {}
