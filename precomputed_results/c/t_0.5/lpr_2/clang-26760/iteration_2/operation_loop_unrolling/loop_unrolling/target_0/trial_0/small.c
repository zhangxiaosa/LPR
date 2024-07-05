int g;
int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1;
  if (g) {
    k = k << j;
    k = k >> 1;  // Unrolled iteration 1
    if (g) {
      k = k << j;
      goto q;
    }
  }
  k = k >> 1;  // Unrolled iteration 2
  if (g) {
    k = k << j;
    k = k >> 1;  // Unrolled iteration 3
    if (g) {
      k = k << j;
      goto q;
    }
  }
}