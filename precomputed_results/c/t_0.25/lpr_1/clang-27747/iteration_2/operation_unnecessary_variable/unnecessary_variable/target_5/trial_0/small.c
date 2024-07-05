#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = i.e;
  int temp = l.d;
  i.g = temp | -(l.f && temp) - (i.h && temp);
}