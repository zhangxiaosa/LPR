#include<iostream>

typedef char b;

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    f.d = 6L;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  }
  fn1();
  char j;
  return j;
}

int main() {
  return 0;
}
