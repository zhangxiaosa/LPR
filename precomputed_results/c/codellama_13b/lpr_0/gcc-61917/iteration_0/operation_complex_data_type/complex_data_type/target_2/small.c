
typedef int a;
typedef int c;
typedef unsigned f;

unsigned fn2(unsigned p1, unsigned p2) { return p1 - p2; }

int k;
unsigned l;
volatile unsigned m[5][8];

unsigned fn3(unsigned p1) {
  unsigned o = 0x4FL;
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
