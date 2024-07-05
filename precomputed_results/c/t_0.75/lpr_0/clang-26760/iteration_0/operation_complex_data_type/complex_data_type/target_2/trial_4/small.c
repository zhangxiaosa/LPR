#include<stdio.h>

int main() {
  int j = 0x24F96B7B;
  int o = 0;

  while (1) {
    j--;
    if (o) {
      o <<= j;
      continue;
    }
    break;
  }

  return 0;
}