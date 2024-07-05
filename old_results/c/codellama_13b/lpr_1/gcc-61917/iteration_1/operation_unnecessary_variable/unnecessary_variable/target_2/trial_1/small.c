
short k;
short l;
volatile short m[5][8];

void fn3() {
  for (;;) {
    for (; l; l++) {
      k = 0;
      while (k >= -27) {
        k = fn1(k);
        m[2][5] = k - 6;
      }
    }
  }
}

int main() {}
