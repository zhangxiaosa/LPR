typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

d fn3(p1) {
  for (;;) {
    a k_unrolled = 0;

    // Unrolled loop body
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;
    p1 = o - p1;

    // Update loop counter
    k_unrolled -= 6;
    k_unrolled -= 6;
    k_unrolled -= 6;
    k_unrolled -= 6;
    k_unrolled -= 6;

    // Termination condition
    if (k_unrolled == -30) break;

    p1 || m[2][5];
  }
}
