
<SYS>

#include <stdio.h>

#define W 3
#define AN 250L
#define AO 48873

int main() {
  int p1 = 7L;
  int p2 = 7L;
  long p3 = 248L;
  signed p4 = 0;
  int an = AN;
  int ao = AO;
  int w = W;
  int v = 0;
  while (w) {
    if (p2 || (an = w)) {
      if (fn3(ao, fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    w--;
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

int fn12(int p1, int p2, long p3, signed p4) {
  int an = AN;
  int ao = AO;
  int w = W;
  int v = 0;
  while (w) {
    if (p2 || (an = w)) {
      if (fn3(ao, fn6(1L, an)) - p2 & 1L)
        v = 1L;
    }
    w--;
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

int fn3(long p1, long p2) {
  return p1 - p2;
}

int fn6(unsigned p1, unsigned p2) {
  return p2 - p1;
}

</SYS>
