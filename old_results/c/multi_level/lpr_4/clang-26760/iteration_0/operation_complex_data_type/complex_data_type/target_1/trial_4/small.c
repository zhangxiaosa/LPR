#include <stdio.h>

unsigned g;
int main() {
  int i;
  unsigned k;

  i = g;
  k = 0;
  
q:
  if (i) {
    k <<= g;
    goto q;
  }
}
