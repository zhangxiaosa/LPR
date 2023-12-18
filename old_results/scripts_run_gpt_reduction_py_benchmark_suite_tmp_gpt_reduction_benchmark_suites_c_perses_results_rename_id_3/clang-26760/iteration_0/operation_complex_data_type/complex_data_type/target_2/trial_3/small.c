#include <stdio.h>

unsigned int f;
int g;

int i;
int j = 0x24F96B7BL;
unsigned int k;
int l = 1L;
int m = j;
int n = g;
int o = n;
unsigned int p = o;

short fn1() {
  int i;

  // Nested loops
  for (f = 0;)
    for (; j; --j)
      ;

  i = p;

  // Conditional statement
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {}
