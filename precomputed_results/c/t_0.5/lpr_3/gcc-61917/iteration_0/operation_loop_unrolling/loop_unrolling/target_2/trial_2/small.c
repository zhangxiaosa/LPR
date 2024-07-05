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
      // Iteration 1
      k = 0;
      p1 = o - p1;

      // Iteration 2
      k = -6;
      p1 = o - p1;

      // Iteration 3
      k = -12;
      p1 = o - p1;

      // Iteration 4
      k = -18;
      p1 = o - p1;

      // Iteration 5
      k = -24;
      p1 = o - p1;
    }
    p1 || m[2][5];
  }
}

int main() {}