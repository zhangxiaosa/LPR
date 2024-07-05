
typedef unsigned int m;
typedef unsigned int m[5];
typedef unsigned int m[5][8];

m fn2(m p1, m p2) { return p1 - p2; }

int k;
m l;
volatile m m[5][8];

m fn3(m p1) {
  m o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++) {
      for (k = 0; k >= -27; k -= 6) {
        p1 = fn2(o, p1);
      }
    }
    p1 || m[2][5];
  }
}

int main() {}
