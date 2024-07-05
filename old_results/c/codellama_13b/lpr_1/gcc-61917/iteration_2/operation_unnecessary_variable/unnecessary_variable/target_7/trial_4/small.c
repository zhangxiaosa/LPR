
int fn1(int p1, int p2) { return p1 - p2; }

int k = 0;
int l;
volatile int m[5][8] = {0};

int fn3() {
  for (;;) {
    for (; l; l++) {
      k = 0;
      while (k >= -27) {
        k = k - 6;
        k = k - k;
      }
    }
    k || m[2][5];
  }
}

int main() {}
