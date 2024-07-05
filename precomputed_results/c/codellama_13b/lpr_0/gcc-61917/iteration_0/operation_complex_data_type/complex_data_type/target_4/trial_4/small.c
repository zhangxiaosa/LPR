
#include <stdio.h>

int main() {
  // Declare the variables
  int k, l;
  unsigned int m[5][8];

  // Initialize the m array
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = i + j;
    }
  }

  // Print the m array
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
