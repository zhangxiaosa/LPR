#include <stdio.h>

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  signed d_value = l.d;  // Extract l.d as a separate variable
  j.e = d_value;  // Assign the extracted value to j.e
  int n = j.h && d_value;
  i.g = d_value | -(l.f && d_value) - n;

  return 0;
}