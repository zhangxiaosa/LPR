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
    for (; l; l++)
      p1 = o - p1;

    // Unrolled loop iteration 1
    k = 0;
    p1 = o - p1;
    p1 = o - p1;

    // Unrolled loop iteration 2
    k = -6;
    p1 = o - p1;
    p1 = o - p1;

    // Unrolled loop iteration 3
    k = -12;
    p1 = o - p1;
    p1 = o - p1;

    p1 || m[2][5];
  }
}

int main() {}