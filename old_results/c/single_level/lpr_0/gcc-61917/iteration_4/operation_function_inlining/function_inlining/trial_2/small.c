int k;
unsigned l;
volatile unsigned m[5][8];

int main() {
  for (unsigned iter = 0; iter < 100; iter++) {
    unsigned p1 = 0;
    for (; l; l++) {
      for (k = 0; k >= -108; k = k - 24) {
        p1 = 0x4FL - p1;
      }
    }
    p1 || m[2][5];
  }
}