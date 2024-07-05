
#include <iostream>

struct c {
  int d : 18;
};

int i_d;

int inline_d(struct c l) {
  return l.d | -(l.d && l.d) - l.d;
}

int main() {
  struct c l;
  l.d = i_d;
  i_d = inline_d(l);
}
