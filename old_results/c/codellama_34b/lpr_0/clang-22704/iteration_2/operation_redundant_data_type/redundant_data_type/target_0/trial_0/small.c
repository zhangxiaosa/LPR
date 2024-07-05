
#include <cstdint>

int d_int;

int fn1(int d_int) {
  if (d_int)
    goto j;
  fn1(d_int);
  return 0xEEACFBBFL;
j:
  d_int = 6L;
  fn1(d_int);
  return 0xEEACFBBFL;
}

int main() {}
