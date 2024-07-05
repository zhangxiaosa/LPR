#include <limits.h>

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
  j.e = j.e;  // Remove unused assignment
  int n = j.h && j.e;  // Replace l.d with j.e
  signed p = j.e | -(j.f && j.e) - n;  // Replace l.d with j.e
  i.g = (int)p;
}