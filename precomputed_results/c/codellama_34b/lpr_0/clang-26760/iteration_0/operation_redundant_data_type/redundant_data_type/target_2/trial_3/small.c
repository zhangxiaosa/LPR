
#include <stdint.h>
#include <stdio.h>

typedef unsigned long long c;
typedef unsigned long long e;

c f;
int g;
int main() {
  int i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; f < j; f++) {
    k = k >> 1;
    i = k;
    if (i) {
      k = k << 1;
      continue;
    }
  }
  c l = 1L;
  c m = j;
  int n = g;
  c o = n;
  e p = o;
  for (; o; --o)
    ;
  c q = o;
  q = q >> l;
  int i = q;
  if (i) {
    q = q << m;
    goto q;
  }
}

int optimize() {
  c j;
  j = 0x24F96B7BL;
  for (; j; --j)
    ;
  c l = 1L;
  c m = j;
  int n = g;
  c o = n;
  for (; o; --o)
    ;
  c p = o;
  p = p >> l;
  int i = p;
  if (i) {
    p = p << m;
    goto p;
  }
  return 0;
}
