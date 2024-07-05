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
    // Unrolled iteration 1
    p1 = o - p1;

    // Unrolled iteration 2
    p1 = o - p1;

    // Unrolled iteration 3
    p1 = o - p1;

    // Unrolled iteration 4
    p1 = o - p1;

    // Handle remaining iterations (less than 4)
    for (; l; l--)
      p1 = o - p1;

    p1 || m[2][5];
  }
}

int main() {}
