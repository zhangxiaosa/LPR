#include <iostream>

typedef int a;
typedef char b;

struct c {
  a d;
  a e;
};

struct c f;

b fn1() {
  if (f.e) {
    fn1();
    return 0xEEACFBBFL;
  }

  fn1();
  return 0;
}

int main() {
  return 0;
}
