
int main() {
  short k;
  short l;
  volatile short m[5][8];
  short fn3(short p1) {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 8; j++) {
        k = 0;
        while (k >= -27) {
          k = fn1(k, 6);
          p1 = k - p1;
        }
      }
      p1 || m[2][5];
    }
  }
}
