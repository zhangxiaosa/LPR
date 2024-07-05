
#include <stdint.h>
#include <stdio.h>

typedef unsigned int c;
typedef unsigned long int d;
typedef unsigned long int e;
d f;
int g;
int main() {
  int i;
  c j = 0x24F96B7BL;
  e k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  c l = 1L;
  c m = j;
  int n = g;
  c o = n;
  e p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

void optimize() {
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
q:;
  p = p >> l;
  int i = p;
  if (i) {
    p = p << m;
    goto q;
  }
}
