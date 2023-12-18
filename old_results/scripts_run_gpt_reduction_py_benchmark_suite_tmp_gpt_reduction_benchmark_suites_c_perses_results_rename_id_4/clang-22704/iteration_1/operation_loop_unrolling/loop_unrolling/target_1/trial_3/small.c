#include <stdbool.h>

struct c {
  int d;
  int e;
};

struct c f;

char fn1() {
  // Unfolded loop iteration 1 (corresponding to 'if (f.e)')
  if (f.e) {
    f.d = 6L;
    return 0xEEACFBBFL;
  }

  // Unfolded loop iteration 2 (corresponding to 'else')
  f.d = 6L;
  return 0xEEACFBBFL;
}

int main() {
  return 0;
}