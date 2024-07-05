#include <stdio.h>

int u_opt;
int v3; // Substituted unsigned with int

int main() {
  int d = 2L;
  for (; u_opt < 51; ++u_opt) {
    v3 = (int)d; // Substituted unsigned with int
    char p1 = (char)v3;
    int fn2 = (int)p1;
    d = fn2 + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", v3);
  return 0;
}