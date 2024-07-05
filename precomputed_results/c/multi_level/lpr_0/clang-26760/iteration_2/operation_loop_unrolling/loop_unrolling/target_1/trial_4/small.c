typedef int a;
a g;
int main() {
  a i;
  int j = 0x24F96B7B;
  unsigned k;

  unsigned f;
  // Unroll the loop, replicating the loop body 4 times
  f = 4;
  while (f >= 4) {
    // Iteration 1
    --f;
    for (; j; --j) {
      ;
    }

    // Iteration 2
    --f;
    for (; j; --j) {
      ;
    }

    // Iteration 3
    --f;
    for (; j; --j) {
      ;
    }

    // Iteration 4
    --f;
    for (; j; --j) {
      ;
    }
  }

q:
  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    goto q;
  }
}