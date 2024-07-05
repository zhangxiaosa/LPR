#include <stdio.h>

struct ComplexDataType {
  short q;
  int s;
};

int main() {
  unsigned h;
  short o;
  struct ComplexDataType data;

  data.q = o;
  data.s = 1L;

  while (data.q > data.s)
    data.q -= 1;
  
  while (data.q > data.s)
    data.q -= 1;
  
  while (data.q > data.s)
    data.q -= 1;
  
  while (data.q > data.s)
    data.q -= 1;
  
  while (data.q > data.s)
    data.q -= 1;
  
  while (data.q > data.s)
    data.q -= 1;
  
  h = data.q;
  printf("checksum = %X\n", h);
  return 0;
}
