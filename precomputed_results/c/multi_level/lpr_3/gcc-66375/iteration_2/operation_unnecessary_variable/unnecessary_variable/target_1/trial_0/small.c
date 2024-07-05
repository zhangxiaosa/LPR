#include <stdio.h>

int v_value;
int u;

int main() {
  for (; u < 51; ++u)
    v_value = v_value + 0x9EE7F9D1C772505BLL;
  printf("checksum = %llx\n", v_value);
  return 0;
}
