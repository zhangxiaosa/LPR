#include <stdio.h>

unsigned fn4(unsigned p1, unsigned p2) { return p1 + p2; }
unsigned u;
unsigned v_03;
int main() {
  for (u = 0; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    v_03 = fn4(u, e[0]);
  }
  printf("checksum = %X\n", v_03);
  return 0;
}
