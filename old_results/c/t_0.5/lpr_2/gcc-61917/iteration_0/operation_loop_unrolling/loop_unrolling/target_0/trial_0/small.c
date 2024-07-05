typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

d fn3(p1) {
  a o;
  for (;;) {
    // Unrolled loop (4 iterations)
    for (; l >= 4; l -= 4) {
      k = 0;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
      p1 = o - p1;
      k = k - 6;
    }

    // Remaining iterations
    for (; l; l--) {
      k = 0;
      p1 = o - p1;
      k = k - 6;
    }

    p1 || m[2][5];
  }
}

int main() {}
