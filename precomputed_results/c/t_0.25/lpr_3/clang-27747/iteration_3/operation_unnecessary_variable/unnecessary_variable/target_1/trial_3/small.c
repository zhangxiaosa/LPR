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
  j.d = j.e;
  bool jh_ld = j.e && j.d;
  i.g = j.d | -(j.f && j.d) - jh_ld;
}