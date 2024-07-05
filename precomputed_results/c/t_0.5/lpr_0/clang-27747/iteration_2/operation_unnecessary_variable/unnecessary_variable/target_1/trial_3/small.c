#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = i.e;
  int n = i.h && l.d;
  i.g = l.d | -(l.d && n);
}