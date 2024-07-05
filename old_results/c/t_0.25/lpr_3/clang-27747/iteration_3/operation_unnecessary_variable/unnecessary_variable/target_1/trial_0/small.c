#include <stdbool.h>

struct c {
  int d : 18;
  int e;
  int f;
  int g;
};

struct c i;
struct c j;

int main() {
  j.e = i.g | -(i.f && i.d);
}
