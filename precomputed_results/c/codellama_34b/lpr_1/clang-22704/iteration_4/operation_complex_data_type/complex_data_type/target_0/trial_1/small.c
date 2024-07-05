
#include <stdio.h>
#include <stdlib.h>

int e = 0;
int fn1(int h) {
  if (e) {
    h = 0xEEACFBBFL;
    fn1(h);
    return 0xEEACFBBFL;
  }
  fn1(h);
  return 0xEEACFBBFL;
}
int main() {}
