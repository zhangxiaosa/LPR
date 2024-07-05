
#include <stdio.h>

#define MAX_INT 0x7FFFFFFF

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;
}

void optimize() {
  int n = j.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;
}

void optimize_with_constant_folding() {
  int n = j.h && 24;
  int o = 24;
  int p = o | -(6738 && 24) - n;
  i.g = p;
}

void optimize_with_constant_folding_and_dead_code_elimination() {
  int p = 24 | -6738 - 1;
  i.g = p;
}
