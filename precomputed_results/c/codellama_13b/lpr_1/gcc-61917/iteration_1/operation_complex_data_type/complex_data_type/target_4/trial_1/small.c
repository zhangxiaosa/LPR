
short k; // primary data type: short
short l; // primary data type: short
volatile short m[5][8]; // primary data type: volatile short

short fn1(short p1, short p2) {
  return p1 - p2; // primary data type: short
}

short fn3(short p1) {
  for (;;) {
    for (; l; l++) {
      k = 0;
      while (k >= -27) {
        k = fn1(k, 6);
        p1 = k - p1;
      }
    }
    p1 || m[2][5]; // primary data type: short
  }
}

int main() {}
