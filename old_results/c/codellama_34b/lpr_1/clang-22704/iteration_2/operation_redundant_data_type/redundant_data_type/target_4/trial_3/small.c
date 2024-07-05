
<SYS>

#include <stdio.h>

int e;

int fn1(int *h) {
  if (e) {
    *h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int h;
  fn1(&h);
  return 0;
}

</SYS>
