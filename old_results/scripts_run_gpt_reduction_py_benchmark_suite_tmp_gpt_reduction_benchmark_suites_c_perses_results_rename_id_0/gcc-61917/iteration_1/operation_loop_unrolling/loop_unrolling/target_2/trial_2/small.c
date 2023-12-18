typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
c k;
e l;
volatile f m[5][8];
d fn3(p1) {
  signed o;
  for (;;) {
    for (; l; l++) {
      // Unrolled loop
      k = 0;
      p1 = o - p1;
      k = -6;
      p1 = o - p1;
      k = -12;
      p1 = o - p1;
      k = -18;
      p1 = o - p1;
      k = -24;
      p1 = o - p1;
      // End of unrolled loop
    }
    p1 || m[2][5];
  }
}
int main() {}