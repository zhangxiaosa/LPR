#include <iostream>

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  if (f.e) {
    return 0xEEACFBBFL;
  }
  
  f.d = 6L;
  fn1();
  
  return 0xEEACFBBFL;
}

int main() {
  // TODO: Add code here
}
