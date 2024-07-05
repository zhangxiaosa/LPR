typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
c k;
e l;
volatile f m[5][8];
d fn3(f p1) {
  for (; l; l++) {
    // Unrolled loop body
    // Loop body iteration 1
    for (k = 0; k >= -27; k = k - 6)
      p1 = 0x4FL - p1;
    l++; // Update l for iteration 1

    // Loop body iteration 2
    for (k = 0; k >= -27; k = k - 6)
      p1 = 0x4FL - p1;
    l++; // Update l for iteration 2

    // Loop body iteration 3
    for (k = 0; k >= -27; k = k - 6)
      p1 = 0x4FL - p1;
    l++; // Update l for iteration 3

    // Loop body iteration 4
    for (k = 0; k >= -27; k = k - 6)
      p1 = 0x4FL - p1;
    l++; // Update l for iteration 4
  }
}

int main() {}
