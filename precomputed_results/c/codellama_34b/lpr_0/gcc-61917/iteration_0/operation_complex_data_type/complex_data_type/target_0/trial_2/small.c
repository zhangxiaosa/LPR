
#include <iostream>

int k;
int l;
volatile int m[5][8];

int fn3(int p1) {
  int o;
  for (;;) {
    for (; l; l++) {
      for (k = 0; k >= -27; k = k - 6) {
        p1 = o - p1;
      }
    }
    p1 || m[2][5];
  }
}

int main() {
  int rows = 5;
  int cols = 8;
  int m[rows][cols];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      m[i][j] = i * cols + j;
    }
  }
  fn3(m);
  return 0;
}

