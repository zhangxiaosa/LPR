#include <stdio.h>

unsigned int f;
int g;

short fn1() {
  unsigned int f_local = f;
  int g_local = g;

  int i;
  int j = 0x24F96B7B;
  unsigned int k;

  // Nested loops
  for (f_local = 0; f_local;) {
    for (; j; --j)
      ;
  }

  int l = 1L;
  int m = j;
  int n = g_local;
  int o = n;
  unsigned int p = o;

q: ;

  // Shifting and assignment
  k = k >> l;
  i = p;

  // Conditional statement
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
