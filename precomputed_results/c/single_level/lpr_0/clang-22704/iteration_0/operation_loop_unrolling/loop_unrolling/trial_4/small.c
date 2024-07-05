#include <iostream>

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
  
  // Removed recursive call
  // fn1();

  b j;
  return j;

i:
  f.d = h;

  // Removed recursive call
  // fn1();

  j = 0xEEACFBBFL;
  return j;
}

int main() {
  // Call fn1 once to avoid unused function warning
  fn1();
  return 0;
}