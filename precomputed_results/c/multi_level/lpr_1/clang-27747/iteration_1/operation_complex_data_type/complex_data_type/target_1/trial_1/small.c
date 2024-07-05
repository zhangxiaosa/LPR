#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  int temp = l.f && l.d;
  signed p = o | -temp - n;
  i.g = p;
}

// Decomposed variables for j:
signed j_d;
unsigned j_e;
unsigned j_f;
signed j_g;
signed j_h;
