
#include <stdio.h>
#include <stdlib.h>

// Define a struct to hold the data
struct g {
  int h;
};

// Define a function to perform the operation
int fn2(int p1, int p2, char p3) {
  int result = 0;
  for (p3 = 6; p3 != -7; p3--) {
    result += p1 * p2;
  }
  return result;
}

// Main function
int main() {
  int p1, p2, p3;
  struct g j;
  j.h = 10;

  p1 = 5;
  p2 = 2;
  p3 = 6;

  int result = fn2(p1, p2, p3);

  printf("The result is: %d\n", result);

  return 0;
}
