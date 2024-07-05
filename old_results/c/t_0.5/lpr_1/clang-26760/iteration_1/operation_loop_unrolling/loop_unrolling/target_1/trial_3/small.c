unsigned g;
int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;

  // Unrolled loop body (4 times)
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;

  k = k >> 1L;
  if (g) {
    k = k << j;
  }
}