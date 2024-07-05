#include <iostream>

int fn1();

int fd = 0;
int fe = 0;

void fn1() {
  if (fe != 0) {
    fd = 6;
    fn1();
  }
  fn1();
}

int main() {
  fn1();
  return 0;
}
