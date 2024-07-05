
#include <stdint.h>
#include <stdio.h>

int main() {
  int i;
  uint32_t j = 0x24F96B7BL;
  uint64_t k;
  for (; j; --j)
    ;
  uint32_t l = 1L;
  uint32_t m = j;
  int n = g;
  uint32_t o = n;
  for (; o; --o)
    ;
  uint32_t p = o;
q:;
  p = p >> l;
  i = p;
  if (i) {
    p = p << m;
    goto q;
  }
}

void optimize() {
  uint32_t j;
  j = 0x24F96B7BL;
  for (; j; --j)
    ;
  uint32_t l = 1L;
  uint32_t m = j;
  int n = g;
  uint32_t o = n;
  for (; o; --o)
    ;
  uint32_t p = o;
q:;
  p = p >> l;
  int i = p;
  if (i) {
    p = p << m;
    goto q;
  }
}
