
<SYS>

#include <stdint.h>

typedef int32_t a;
typedef uint32_t c;
typedef uint32_t g;

struct m {
  a n : 18;
  c o : 1;
};

c r;
static a s = -5L;
g t;
c u;

a fn4_inlined(p1) {
  struct m ad = {1957};
  ad.o = p1;
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  return ad.o;
}

int main() { fn4_inlined(5); }

</SYS>
