
#include <iostream>

typedef int a;
typedef char b;
struct c {
  int d;
  int e;
};
struct c f;

b fn1() {
  int h = 6L;
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
  int x = 5;
  char y = 'a';
  c z;
  z.d = x;
  z.e = y;
  fn1();
  return 0;
}
