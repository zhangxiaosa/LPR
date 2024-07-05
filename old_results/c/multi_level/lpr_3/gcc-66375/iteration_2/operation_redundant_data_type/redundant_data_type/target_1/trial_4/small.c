#include <stdio.h>

char fn2(p1) { return p1; }

int v_value;

int main() {
  int d = 2;
  for (; v_value < 51; ++v_value)
    d = fn2(v_value = d) + 0x9EE7F9D1C772505BLL;
  printf("v_value = %u\n", v_value);
  return 0;
}