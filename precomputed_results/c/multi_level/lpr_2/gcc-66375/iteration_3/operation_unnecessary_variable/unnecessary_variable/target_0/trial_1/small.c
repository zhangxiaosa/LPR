#include <stdio.h>

int u_opt;
int v3;
int main() {
  for (; u_opt < 51; ++u_opt) {
    v3 = 2L;
    char p1 = (char)v3;
    
    // Calculate new value for d
    int d_new = p1 + 0x9EE7F9D1C772505BLL;

    // Copy propagate the new value of d
    v3 = d_new;
  }
  printf("checksum = %X\n", v3);
  return 0;
}