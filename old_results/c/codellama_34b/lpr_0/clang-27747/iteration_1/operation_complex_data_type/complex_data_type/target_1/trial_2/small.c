
#include <stdio.h>

int d = 18;
int f;

struct c {
  int d : 18;
  int f;
};
struct c i;

int j;

int main() {
  struct c l = {24, 6738};
  l.d = j;
  int n = j && l.d;
  i.d = l.d | -(l.f && l.d) - n;
}

int optimized_main() {
  int l_d = 24;
  int l_f = 6738;
  int i_d;
  int i_f;

  i_d = l_d | -(l_f && l_d) - (j && l_d);
}

int main() {
  optimized_main();
}
