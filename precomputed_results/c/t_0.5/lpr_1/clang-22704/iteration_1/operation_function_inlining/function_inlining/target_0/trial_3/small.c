#include <stdio.h>

struct c {
  int d;
  int e;
};

struct c f;

int main() {
  while (f.e) {
    f.d = 6L;
  }
  return 0xEEACFBBFL;
}