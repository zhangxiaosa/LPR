#include <limits.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  // struct c l is optimized out

  j.e = 6738;
  j.h = 1; // or 0 depending on the desired value of n

  int n = j.h && 24;
  signed p = -1 - n;
  i.g = p;
}