
#include <iostream>

typedef char b;
int d;
int e;

b fn1() {
  int h = 6L;
  if (e)
    goto i;
  fn1();
  b j;
  return j;
i:
  d = h;
  fn1();
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  int h = 6L;
  int i = 0;
  while (i < 10) {
    h = fn1();
    std::cout << h << std::endl;
    i++;
  }
  return 0;
}
