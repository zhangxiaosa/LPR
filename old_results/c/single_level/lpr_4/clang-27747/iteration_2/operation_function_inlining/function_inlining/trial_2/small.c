#include <iostream>

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
  l.d = j.e;
  int n = j.h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;
  
  // Inlined code:
  // Declare a variable l of type struct c and initialize it with the values {24, 6738, 165}.
  // Update the value of l.d with the value of j.e.
  // Declare an integer variable n and assign it the logical AND of j.h and l.d.
  // Declare a signed integer variable p and assign it the result of an expression involving l.d, l.f, and n.
  // Update the value of i.g with the value of p.
}
