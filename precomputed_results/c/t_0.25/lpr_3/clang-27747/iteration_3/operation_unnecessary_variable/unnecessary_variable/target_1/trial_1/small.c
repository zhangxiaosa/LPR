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
  j.e = 24;
  bool jh_ld = j.e && j.e;
  i.g = j.e | -(j.f && j.e) - jh_ld;
}