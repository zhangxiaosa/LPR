int g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  unsigned p = g;
q:
  k = k >> 1;
  if (p) {
    k = k << j;
    goto q;
  }

  // Unrolled version
  k = k << j;
  goto q;

  // Unrolled version
  k = k << j;
  goto q;
}