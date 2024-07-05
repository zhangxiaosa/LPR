
#include <stdio.h>

// Define the integer variable that v points to
int v_addr;

// Define the pointer variable v
int *v = &v_addr;

// Define the function that takes an integer pointer as an argument
int fn12(int *p) {
  // Use the dereference operator to access the value of the integer variable through the pointer
  return *p;
}

int main() {
  // Call the function with the address of the integer variable as an argument
  fn12(&v_addr);
  return 0;
}
