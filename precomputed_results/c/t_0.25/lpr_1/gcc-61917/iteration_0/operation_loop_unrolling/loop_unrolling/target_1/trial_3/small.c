typedef signed a;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

a o;
for (;;) {
  for (; l >= 16; l -= 16) {
    // Unrolled iteration 1
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Unrolled iteration 2
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Unrolled iteration 3
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;

    // Unrolled iteration 4
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  // Handle remaining iterations (less than 16)
  for (; l >= 4; l -= 4) {
    // Unrolled iteration 1
    for (k = 0; k >= -27; k = k - 6)
      p1 = o - p1;
  }

  p1 || m[2][5];
}