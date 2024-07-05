int g;
int main() {
  int j = 0x24F96B7B;
  unsigned k;
  if (j)
    --j;
q:
  k = k >> 1;
  if (g) {
    k = k << 0;  // Optimization: Shift by zero bits
    goto q;
  }
}