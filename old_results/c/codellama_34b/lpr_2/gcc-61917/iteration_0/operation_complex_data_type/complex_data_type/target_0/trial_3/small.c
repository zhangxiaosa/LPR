
#include <iostream>

int k; // primary data type
unsigned l; // primary data type
volatile int m[5][8]; // 2D array of integers

int fn3(int p1) {
  int o; // primary data type
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = o - p1;
    }
  }
  return m[2][5];
}

int main() {
  int p1 = 0;
  int result = fn3(p1);
  std::cout << result << std::endl;
  return 0;
}
