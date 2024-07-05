
#include <iostream>
#include <cstdint>

using namespace std;

int k;
int l;
volatile int m[5][8];

void fn3(int p1) {
  int o;
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -27; k = k - 6)
        p1 = o - p1;
    p1 || m[2][5];
  }
}

int main() {
  int x = 0;
  int y = 0;
  int z = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = x + y + z;
      x = x + 1;
      y = y + 2;
      z = z + 3;
    }
  }

  fn3(10);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      cout << m[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
