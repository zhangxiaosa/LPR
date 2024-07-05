#include <stdio.h>

int g;

int fn1() {
  int i;
  int j = 0x24F96B7B;
  unsigned int k;
  unsigned int f;
  
  for (f = 0; f != 0; f++) {
    for (; j != 0; --j) {
      // loop body
    }
  }
  
  int l = 1;
  int m = j;
  int n = g;
  int o = n;
  unsigned int p = o;

q:
  k = k >> l;
  i = p;
  
  if (i != 0) {
    k = k << m;
    goto q;
  }
  
  return 0;
}

int main() {
  return 0;
}