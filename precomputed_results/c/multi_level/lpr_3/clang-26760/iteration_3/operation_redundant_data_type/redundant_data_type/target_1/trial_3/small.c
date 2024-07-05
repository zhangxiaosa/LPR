#include <stdio.h>

int32_t f;
int32_t g;

int main() {
  int32_t i;
  int32_t j = 0x24F96B7B;
  unsigned int k;
  
  for (f = 0; ;)
    --j;
  
  int32_t l = 1;
  int32_t m = j;
  int32_t n = g;
  int32_t o = n;
  unsigned int p = (unsigned int)o;

q:
  k = k >> (unsigned int)l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}