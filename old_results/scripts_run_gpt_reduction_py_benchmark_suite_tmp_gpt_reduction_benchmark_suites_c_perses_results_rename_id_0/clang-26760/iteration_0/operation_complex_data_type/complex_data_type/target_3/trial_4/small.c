#include<stdio.h>

typedef signed int a;
typedef int c;

c j = 0x24F96B7B;

int main() {
  c m = j;

  q:
  if (m) {
    goto q;
  }

  return 0;
}