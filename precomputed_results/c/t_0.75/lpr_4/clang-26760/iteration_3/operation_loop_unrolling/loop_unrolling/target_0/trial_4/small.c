int g;
int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;
  k = k >> 1L;
  if (g) {
    k = k << j;
    k = k >> 1L;
  }
  if (g) {
    k = k << j;
    k = k >> 1L;
  }
  // Repeat the loop body for additional iterations
  // ...
  // k = k << j;
  // k = k >> 1L;

  return 0;
}