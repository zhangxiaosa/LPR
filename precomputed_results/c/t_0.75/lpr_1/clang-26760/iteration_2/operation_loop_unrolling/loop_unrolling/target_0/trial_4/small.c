int g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  int m = j;
q:
  k = k >> 1L;
  k = k >> 1L;  // First unrolled iteration
  k = k >> 1L;  // Second unrolled iteration
  k = k >> 1L;  // Third unrolled iteration
  // Repeat the line as many times as needed
  // ...
  if (g) {
    k = k << m;
    goto q;
  }
}