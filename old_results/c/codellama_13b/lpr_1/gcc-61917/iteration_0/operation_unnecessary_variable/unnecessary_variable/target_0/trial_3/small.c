c
int fn1() {
  return -27;
}

int fn2() {
  return -27;
}

int k;
int l;
volatile int m[5][8];

int fn3() {
  for (;;) {
    for (; l; l++)
      for (; m[2][5]; m[2][5])
        m[2][5] = -27;
  }
}

int main() {}
