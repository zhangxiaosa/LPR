
#include <stdio.h>

typedef int a;
typedef char b;
struct c {
  a d;
  a e;
};
struct c f;

b fn1(a h) {
  if (f.e) {
    f.d = h;
    fn1(h);
    b j = 0xEEACFBBFL;
    return j;
  }
  else {
    fn1(h);
    b j = 0xEEACFBBFL;
    return j;
  }
}

int main() {
  a h = 6L;
  fn1(h);
  return 0;
}
