#include <stdio.h>

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
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;

  // Optimized code for l
  int optimized_l_d = j.e;
  int optimized_n = j.h && optimized_l_d;
  signed optimized_p = optimized_l_d | -(l.f && optimized_l_d) - optimized_n;
  i.g = optimized_p;
}
