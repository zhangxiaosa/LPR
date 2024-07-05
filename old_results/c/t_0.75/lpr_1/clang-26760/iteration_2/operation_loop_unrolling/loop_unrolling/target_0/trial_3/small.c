#include <stdio.h>

int g;

int main() {
  int j = 0x24F96B7BL;
  unsigned k;

  if (j)
    --j;

  int m = j;

  k = k >> 1L;

  if (g) {
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k >> 1L;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    k = k << m;
    goto q;
  }

q:
  k = k >> 1L;

  if (g) {
    k = k << m;
    goto q;
  }
}