
int fn1(int p1, int p2) {
  return p1 - p2;
}

int k;
int l;
volatile int m[5][8];

int fn3(p1) {
  for (;;) {
    for (; l; l++) {
      p1 = fn1(p1, m[2][5]);
      p1 = fn1(p1, m[2][4]);
      p1 = fn1(p1, m[2][3]);
      p1 = fn1(p1, m[2][2]);
      p1 = fn1(p1, m[2][1]);
      p1 = fn1(p1, m[2][0]);
      p1 = fn1(p1, m[1][5]);
      p1 = fn1(p1, m[1][4]);
    }
    p1 || m[2][5];
  }
}

int main() {}
