
#include <stdio.h>

// Define the structure type
struct c {
  int d : 18;
  int g;
};

// Declare a variable of type struct c
struct c i;

int main() {
  // Declare a variable of type struct c
  struct c l;

  // Assign the value of i.d to l.d
  l.d = i.d;

  // Perform a logical AND operation on i.d and l.d
  int n = i.d && l.d;

  // Assign the result of the logical AND operation to i.g
  i.g = n;

  return 0;
}
