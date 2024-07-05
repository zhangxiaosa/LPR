#include <stdio.h>

int d;
int e;

char fn1() {
  if (e) {
    d = 6;
    fn1();
    return (char)0xEE;
  } else {
    fn1();
    return (char)0xEE;
  }
}

int main() {
  return 0;
}
