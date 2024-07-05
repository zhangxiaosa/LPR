#include <stdio.h>

char fn2(char p1) { return p1; }

int v_value;
int u;

int main() {
  int d = 2;
  for (; u < 51; ++u)
    d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  printf("checksum = %x\n", v_value);
  return 0;
}