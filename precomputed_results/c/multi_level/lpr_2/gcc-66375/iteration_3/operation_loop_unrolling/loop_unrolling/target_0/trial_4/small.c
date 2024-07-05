#include <stdio.h>

int u_opt;
int v3;

int main() {
  int d = 2L;

  // Loop unrolling
  for (; u_opt < 25; u_opt += 2) {
    // First unrolled iteration
    v3 = d;
    char p1 = v3;
    d = p1 + 0x9EE7F9D1C772505BLL;

    // Second unrolled iteration
    v3 = d;
    p1 = v3;
    d = p1 + 0x9EE7F9D1C772505BLL;
  }

  // Handle remaining iteration if the total number of iterations is odd
  if (u_opt < 51) {
    v3 = d;
    char p1 = v3;
    d = p1 + 0x9EE7F9D1C772505BLL;
  }

  printf("checksum = %X\n", v3);
  return 0;
}
