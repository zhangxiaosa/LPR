#include <stdio.h>

int v_value;
int u;

int main() {
  int d = 2;
  for (; u < 51; ++u) {
    v_value = d;
    d += 0x9EE7F9D1C772505BLL;
  }
  printf("checksum = %x\n", v_value);
  return 0;
}
