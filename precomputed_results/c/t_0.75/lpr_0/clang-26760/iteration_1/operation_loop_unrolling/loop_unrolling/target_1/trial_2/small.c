#include <iostream>

unsigned g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;

  // Unrolled loop
  // The original loop condition is `for (unsigned f; f;)`
  // Since the loop condition is not modified within the loop body,
  // we can determine that the loop will execute at most once.
  {
    unsigned f = 0;
    // Loop body (unrolled)
    // No need to perform any iterations since the loop is executed at most once
  }

  while (1) {
    k = k >> 1;
    i = g;
    if (i) {
      k = k << j;
      continue;
    }
    break;
  }
}