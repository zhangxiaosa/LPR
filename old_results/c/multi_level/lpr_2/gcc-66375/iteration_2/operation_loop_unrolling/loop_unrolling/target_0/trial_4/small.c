#include <stdio.h>

unsigned u_opt;
unsigned v3;

int main() {
  int d = 2L;
  unsigned i;

  for (i = 0; i < 51; i += 2) {
    // Unrolled iteration 1
    u_opt = i;
    v3 = d;
    char p1 = v3;
    char fn2 = p1;
    d = fn2 + 0x9EE7F9D1C772505BLL;

    // Unrolled iteration 2 (previous iteration inlined)
    u_opt = i + 1;
    v3 = d;
    p1 = v3;
    fn2 = p1;
    d = fn2 + 0x9EE7F9D1C772505BLL;
  }

  printf("checksum = %X\n", v3);
  return 0;
}