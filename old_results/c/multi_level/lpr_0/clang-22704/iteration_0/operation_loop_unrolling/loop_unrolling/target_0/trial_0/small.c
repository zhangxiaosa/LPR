#include <iostream>

using namespace std;

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
  fn1();
  fn1();
  fn1();
  
  f.d = h;
  
  fn1();
  fn1();
  fn1();
  fn1();
  
  return static_cast<b>(0xEEACFBBFL);
  
i:
  
  f.d = h;
  
  fn1();
  fn1();
  fn1();
  fn1();
  
  return static_cast<b>(0xEEACFBBFL);
}

int main() {
  return 0;
}
