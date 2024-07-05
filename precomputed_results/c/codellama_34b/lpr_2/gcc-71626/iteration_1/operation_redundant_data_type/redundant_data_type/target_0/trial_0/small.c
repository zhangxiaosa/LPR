
<SYS>

#include <stdlib.h>

typedef long d;

d fn2() {
  d f = {(long)fn1};
  return f;
}

main() {
  d f = fn2();
}

</SYS>
