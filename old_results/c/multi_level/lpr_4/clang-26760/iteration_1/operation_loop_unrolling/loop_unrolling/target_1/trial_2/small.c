#include <iostream>

unsigned g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;
  int unrollFactor = 4;
  int outerIterations = (j + unrollFactor - 1) / unrollFactor;

  for (int outerIter = 0; outerIter < outerIterations; ++outerIter) {
    for (int innerIter = 0; innerIter < unrollFactor; ++innerIter) {
      // Unrolled loop body
    }
    j -= unrollFactor;
  }

q:
  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    goto q;
  }
}