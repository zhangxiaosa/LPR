c
#include <iostream>

struct FnType {
  void (*fn)();
};

FnType fn1() {
  FnType f;
  f.fn = &fn1;
  return f;
}

FnType fn2() {
  FnType f;
  f.fn = &fn2;
  return f;
}

int main() {
  FnType f = fn1();
  f.fn();
}
