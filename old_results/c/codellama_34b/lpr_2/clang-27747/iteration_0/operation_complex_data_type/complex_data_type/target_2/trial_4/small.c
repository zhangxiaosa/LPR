
#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

int main() {
  struct c i;
  struct c j;
  int m = j.e;
  int n = j.h && i.d;
  int o = i.d;
  int p = o | -(i.f && i.d) - n;
  i.g = p;
}

void decompose_variable() {
  int m = j.e;
  int n = j.h && i.d;
  int o = i.d;
  int p = o | -(i.f && i.d) - n;
  i.g = p;
}

int main() {
  struct c i;
  struct c j;
  decompose_variable();
}
