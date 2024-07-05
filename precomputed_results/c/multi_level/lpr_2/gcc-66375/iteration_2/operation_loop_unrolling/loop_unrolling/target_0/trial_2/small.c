#include <stdio.h>

unsigned u_opt;
unsigned v3;

int main() {
  int d = 2L;

  // Unroll loop iteration 1
  u_opt = 0;
  v3 = d;
  char p1 = v3;
  char fn2 = p1;
  d = fn2 + 0x9EE7F9D1C772505BLL;

  // Unroll loop iteration 2
  u_opt = 1;
  v3 = d;
  p1 = v3;
  fn2 = p1;
  d = fn2 + 0x9EE7F9D1C772505BLL;

  // Unroll loop iteration 3
  u_opt = 2;
  v3 = d;
  p1 = v3;
  fn2 = p1;
  d = fn2 + 0x9EE7F9D1C772505BLL;

  printf("checksum = %X\n", v3);
  return 0;
}