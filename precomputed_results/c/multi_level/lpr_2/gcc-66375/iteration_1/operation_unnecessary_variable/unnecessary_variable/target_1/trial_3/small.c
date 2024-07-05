#include<stdio.h>

unsigned u_opt;
unsigned v3;

int main() {
  int d = 2L;
  for (; u_opt < 51; ++u_opt) {
    d = d + 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %X\n", d);
  return 0;
}
