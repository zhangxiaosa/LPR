
#include <iostream>

int k;
unsigned l;
volatile int m[5][8];

int fn3(int* p1) {
  int o;
  for (;;) {
    for (; l; l++) {
      for (k = 0; k >= -27; k -= 6) {
        *p1 = o - *p1;
      }
    }
    p1 || m[2][5];
  }
}

int main() {
  int arr[5][8] = {{1, 2, 3, 4, 5, 6, 7, 8}, {9, 10, 11, 12, 13, 14, 15, 16}, {17, 18, 19, 20, 21, 22, 23, 24}, {25, 26, 27, 28, 29, 30, 31, 32}, {33, 34, 35, 36, 37, 38, 39, 40}};
  fn3(arr[2][5]);
  return 0;
}
