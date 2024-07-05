
#include <stdio.h>

struct c_new {
  int h : 18;
};

int main() {
  struct c_new j;
  int n = j.h && j.h;
  int p = j.h | -(165 && j.h) - n;
  j.h = p;
}
