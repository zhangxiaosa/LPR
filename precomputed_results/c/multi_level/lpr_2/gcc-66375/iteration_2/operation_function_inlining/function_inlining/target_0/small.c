#include <stdio.h>

unsigned u_opt;
unsigned v3;

int main() {
  int d = 2L;
  for (; u_opt < 51; ++u_opt) {
    v3 = d;
    char p1 = v3;
    char fn2 = p1;
    d = fn2 + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", v3);
  return 0;
}