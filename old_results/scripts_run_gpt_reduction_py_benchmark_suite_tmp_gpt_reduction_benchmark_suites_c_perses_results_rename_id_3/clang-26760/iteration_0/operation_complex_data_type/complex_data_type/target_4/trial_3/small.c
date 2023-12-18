#include <stdio.h>

unsigned int f;
int g;
int i;
int j = 0x24F96B7B;
unsigned int k;
int l = 1L;
int m;
int n;
int o;
unsigned int p;

short fn1() {
  int i;
  int j = 0x24F96B7BL;
  unsigned int k;

  // Nested loops
  for (f = 0; f;)
    for (; j; --j)
      ;

  int l = 1L;
  int m = j;
  int n = g;
  int o = n;
  unsigned int p = o;

q:;

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
