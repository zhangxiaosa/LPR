
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
  int result = fn1(&e);
  printf("Result: %d\n", result);
  return 0;
}

</SYS>
