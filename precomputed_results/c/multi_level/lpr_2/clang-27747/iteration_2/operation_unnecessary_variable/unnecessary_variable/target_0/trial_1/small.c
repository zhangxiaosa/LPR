#include<stdio.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
  int h;
};

struct c i;

int main() {
  i.d = i.e;
  i.g = i.d;
}
