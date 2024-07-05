
#include <iostream>

using namespace std;

// Decompose the program into variables with primary data types

int k = 0;
int l = 0;
int m[5][8] = {0}; // initialize all elements to 0
int o = 0;
int p1 = 0;

// Function fn3 takes an integer as input and returns an integer
int fn3(int p1) {
  // Loop forever
  for (;;) {
    // Loop through the rows of m
    for (int i = 0; i < 5; i++) {
      // Loop through the columns of m
      for (int j = 0; j < 8; j++) {
        // Update the value of m[i][j]
        m[i][j] = o - p1;
      }
    }

    // Break out of the loop if p1 is 0
    if (p1 == 0) {
      break;
    }
  }

  return p1;
}

int main() {
  // Call fn3 with the input value 10
  fn3(10);

  // Print the updated value of m
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
