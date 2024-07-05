
#include <stdint.h>

typedef unsigned int UINT;
typedef int INT;
typedef struct m {
  INT n : 18;
  INT o : 1;
} STRUCT_M;

UINT fn1(UINT p1, INT p2) {
  return (UINT)p2;
}

INT r;
static INT s = -5L;
INT u;

INT fn4() {
  STRUCT_M ad = {1957};
  ad.o = fn1(0, 5);
  INT ae;
  INT af = u;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() {
  fn4();
}
