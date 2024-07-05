int g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f = 0;

  // Loop unrolling
  --j; // Iteration 1
  --j; // Iteration 2
  // Repeat decrementing j (0x24F96B7B - 2) more times...
  // ...
  // --j; // Iteration 0x24F96B7B

q:
  k = k >> 1;
  if (g) {
    k = k << j;
    goto q;
  }
}