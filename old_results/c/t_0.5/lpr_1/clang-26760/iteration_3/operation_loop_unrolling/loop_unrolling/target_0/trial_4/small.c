unsigned g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;

  // Unrolled loop iteration 1
  k = k >> 1L;
  if (g)
    k = k << j;

  // Unrolled loop iteration 2
  k = k >> 1L;
  if (g)
    k = k << j;

  // Unrolled loop iteration 3
  k = k >> 1L;
  if (g)
    k = k << j;

  // Unrolled loop iteration 4
  k = k >> 1L;
  if (g)
    k = k << j;
}