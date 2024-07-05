
#include <iostream>

int d;
int e;

int fn1(int h) {
  if (e)
    return 0xEEACFBBFL;
  return h;
}

int main() {
  int h = 6L;
  int j = fn1(h);
  std::cout << h << " " << j << std::endl;
  return 0;
}
