#include <stdio.h>

int u_opt;

int main() {
  int d = 2L;
  for (; u_opt < 51; ++u_opt) {
    d = (int)d;
    char p1 = (char)d;
    int fn2 = (int)(unsigned)p1;
    d = fn2 + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", (unsigned)d);
  return 0;
}