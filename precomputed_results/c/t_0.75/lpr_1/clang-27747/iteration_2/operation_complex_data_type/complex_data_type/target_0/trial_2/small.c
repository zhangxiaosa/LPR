#include <stdio.h>

struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

signed int d;
unsigned int e;
unsigned int f;
signed int g;
signed int h;

signed int i_g;
struct c j;
signed int n;

int main() {
  struct c l;
  l.f = 165;
  l.d = j.e;
  n = j.h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}