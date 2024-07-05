#include <stdio.h>

unsigned u;

signed ab;
signed q;

#define V_SIZE 1
struct p {
  signed ab;
  signed q : 22;
};

struct p v[V_SIZE];

struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a;
  int i;

  // Initialize a and v[0] with w_init
  a = v[0] = w_init;

  for (i = 0; u <= 1; u += 2, i++) {
    v[0] = a;

    // Perform other operations within the loop
    // ...

    // Update a and v[0] with w_init again if needed
    a = v[0] = w_init;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}