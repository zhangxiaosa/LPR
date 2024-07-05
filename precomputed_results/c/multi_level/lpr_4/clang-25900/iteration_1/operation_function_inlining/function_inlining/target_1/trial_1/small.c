#include <stdio.h>

struct m {
  int n : 18;
  int o : 1;
};

int fn4() {
  struct m p2 = {1957};
  p2.o = 5;  // Replace fn1(5, 5) with 5
  p2.o = u;  // Remove unused variable assignment
  return p2.o;  // Replace p2.o; with return statement
}

int main() {
  return fn4();  // Change to return the value from fn4
}