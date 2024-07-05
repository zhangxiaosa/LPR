
<SYS>

#include <stdio.h>

// Function to optimize
int fn1(int* h) {
  int d;
  int e;
  if (e == 0) {
    goto i;
  }
  fn1(h);
  return 0xEEACFBBFL;
i:
  d = *h;
  fn1(h);
  return 0xEEACFBBFL;
}

int main() {
  int* h = NULL;
  int d = 0;
  int e = 0;

  // Call the function with a pointer to the integer variable 'd'
  fn1(&d);

  // Print the result
  printf("The result is: %d\n", d);

  return 0;
}

