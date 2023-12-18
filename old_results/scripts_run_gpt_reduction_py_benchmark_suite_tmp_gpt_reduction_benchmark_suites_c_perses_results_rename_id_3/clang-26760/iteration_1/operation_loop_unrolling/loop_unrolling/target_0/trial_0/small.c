#include <iostream>

unsigned f;
int g;

short fn1() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k;

  // Initialize j to its initial value
  j = 0x24F96B7BL;

  // Unrolled loop
  j--;
  j--;
  j--;
  j--;

  int l = 1L;
  int m = j;
  int n = g;
  int o = n;
  unsigned p = o;

q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
