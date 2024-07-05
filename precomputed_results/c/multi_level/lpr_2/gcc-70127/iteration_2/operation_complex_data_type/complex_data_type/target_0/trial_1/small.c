#include <stdio.h>

struct p {
  int ab;
  int q;
};

unsigned int u;
struct p v[1];
struct p w;

int main() {
  struct p a;

  // Assign values to decomposed variables
  a.ab = 8;
  a.q = 666;

  // Initialize v[0] with w
  v[0].ab = 0x1C87E74F;
  v[0].q = 816;

  for (u = 0; u <= 1; u += 1) {
    // Assign w to a
    a = w;
    // Assign a to v[0]
    v[0] = a;
  }

  // Print v[0].q in hexadecimal format
  printf("checksum = %X\n", v[0].q);

  return 0;
}