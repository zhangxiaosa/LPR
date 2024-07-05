
int fn2(int p1, int p2) {
  return p1 - p2;
}

int k;
int l;
volatile int m[5][8];

int fn3(int p1) {
  int o;
  for (;;) {
    for (; l; l++) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = fn2(o, p1);
      }
    }
  }
}

int main() {}
