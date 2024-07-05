#include <iostream>

unsigned g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;

  for (; f;) {
    for (; j; --j);
  }

  int l = 1L;
  int m = j;
  unsigned n = g;
  int o = n;
  unsigned p = o;

q:
  k = k >> l;
  i = p;

  if (i) {
    k = k << m;
    goto q;
  }

  std::cout << "k = " << k << std::endl;

  return 0;
}