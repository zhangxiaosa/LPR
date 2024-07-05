#include <iostream>

unsigned g;
int h2 = 2453191021;

unsigned fn2() {
  for (;;) {
    // int r0[5][9][5]; // Removed since it's unused
    if (h2)
      return 195;
    // g = r0[215][215][215]; // Removed since it doesn't affect r0
  }
}

int main() {
  fn2();
}
