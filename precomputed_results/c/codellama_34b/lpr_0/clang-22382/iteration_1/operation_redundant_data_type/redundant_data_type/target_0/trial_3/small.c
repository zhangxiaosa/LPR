
static unsigned fn1(int i, long j) {
  j;
  for (;;)
    ;
}

unsigned fn2() {
  int i = 0;
  long j = 0;
  fn1(i, j);
  for (;;) {
    int r = 0;
    i = r = i;
  }
}

int main() {}
