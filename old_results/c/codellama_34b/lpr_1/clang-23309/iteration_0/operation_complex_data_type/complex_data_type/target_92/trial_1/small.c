
#include <stdio.h>

void get_string(short p1, char *p2) {
  p = p1;
}

short get_checksum(short p1, short p2) {
  return p1 - p2;
}

int main() {
  short checksum = get_checksum(0, 0);
  get_string(checksum, "g_170");
  printf("checksum = %X\n", checksum);
  return 0;
}
