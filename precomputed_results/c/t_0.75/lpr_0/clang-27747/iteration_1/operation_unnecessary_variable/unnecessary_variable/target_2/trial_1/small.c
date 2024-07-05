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
  j.e;
  int n = j.h && j.e;
  signed p = j.e | -(j.h && j.e) - n;
  i.g = (int)p;
}