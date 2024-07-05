
#include <iostream>

struct c {
  int d;
  int e;
};

int fn1(struct c &f) {
  int h = 6L;
  if (f.e)
    goto i;
  fn1(f);
  int j;
  return j;
i:
  f.d = h;
  fn1(f);
  j = 0xEEACFBBFL;
  return j;
}

int main() {
  struct c f;
  f.d = 0;
  f.e = 0;
  int j = fn1(f);
  std::cout << "j: " << j << std::endl;
  return 0;
}
