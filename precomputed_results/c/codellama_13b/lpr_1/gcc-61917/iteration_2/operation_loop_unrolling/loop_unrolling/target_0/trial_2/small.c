
short fn1(short p1, short p2) {
  return p1 - p2;
}

short k;
short l;
volatile short m[5][8];

short fn3(p1) {
  for (;;) {
    for (int i = 0; i < 5; i++) {
      k = 0;
      while (k >= -27) {
        k = fn1(k, 6);
        p1 = k - p1;
      }
      p1 = p1 - m[2][5];
    }
  }
}

int main() {}
