
<SYS>

#include <stdio.h>

typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

b fn1() {
  a h = 6L;
  if (f.e)
    goto i;
  fn1();
  b j;
  return j;
i:
  f.d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  f.e = 0;
  while (1) {
    fn1();
    if (f.d == 6L) {
      break;
    }
  }
  return 0;
}

</SYS>
