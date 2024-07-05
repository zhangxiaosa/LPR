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
    for (; l; l++) {
      // Unrolled loop
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;
      p1 = o - p1;

      // Update loop variable
      k = k - 6 * 5;
    }
    p1 || m[2][5];
  }
}

int main() {}
