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
  i.g = j.e | -(j.e && j.d) - (j.e && j.d);
}