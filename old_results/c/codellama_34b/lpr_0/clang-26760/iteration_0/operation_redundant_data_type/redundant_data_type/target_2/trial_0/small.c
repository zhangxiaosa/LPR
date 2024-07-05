
#include <stdint.h>
#include <stdio.h>

d f;
int g;
int main() {
  int i;
  unsigned int j = 0x24F96B7BL;
  unsigned long int k;
  for (f = 0; f;)
    for (; j; --j)
      ;
  unsigned long int l = 1L;
  unsigned long int m = j;
  int n = g;
  unsigned long int o = n;
q:;
  k = k >> l;
  i = o;
  if (i) {
    k = k << m;
    goto q;
  }
}

void optimize() {
  unsigned int j;
  j = 0x24F96B7BL;
  for (; j; --j)
    ;
  unsigned long int l = 1L;
  unsigned long int m = j;
  int n = g;
  unsigned long int o = n;
  for (; o; --o)
    ;
  unsigned long int p = o;
q:;
  p = p >> l;
  int i = p;
  if (i) {
    p = p << m;
    goto q;
  }
}
