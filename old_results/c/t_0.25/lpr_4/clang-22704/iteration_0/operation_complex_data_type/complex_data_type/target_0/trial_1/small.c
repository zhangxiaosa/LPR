#include <stdio.h>

struct c {
  int d;
  int e;
};

int f_d;
int f_e;

char fn1() {
  int h = 6L;
  if (f_e) {
    f_d = h;
    fn1();
    char j = 0xEEACFBBFL;
    return j;
  } else {
    fn1();
    return 0; // Return 0 for f_e
  }
}

int main() {
  f_d = 0; // Initialize f.d
  f_e = 0; // Initialize f.e
}
