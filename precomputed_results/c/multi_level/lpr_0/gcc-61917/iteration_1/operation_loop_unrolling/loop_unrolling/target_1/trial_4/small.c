typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

c k;
e l;
volatile f m[5][8];

d fn3(p1) {
  signed o;

  // Unrolled loop 1 - execute loop body 1 time
  for (k = 0; k >= -27; k = k - 6) {
    p1 = o - p1;
  }

  // Unrolled loop 2 - execute loop body 1 time
  for (k = 0; k >= -27; k = k - 6) {
    p1 = o - p1;
  }

  // Unrolled loop 3 - execute loop body 1 time
  for (k = 0; k >= -27; k = k - 6) {
    p1 = o - p1;
  }

  // Unrolled loop 4 - execute loop body 1 time
  for (k = 0; k >= -27; k = k - 6) {
    p1 = o - p1;
  }

  // Unrolled loop 5 - execute loop body 1 time
  for (k = 0; k >= -27; k = k - 6) {
    p1 = o - p1;
  }

  // Check condition p1 || m[2][5]
  p1 || m[2][5];
}

int main() {
  // Empty main function
}