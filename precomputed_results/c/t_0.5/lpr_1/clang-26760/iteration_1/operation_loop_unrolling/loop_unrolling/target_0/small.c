unsigned g;
int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;
  for (unsigned f; f;)
    for (; j; --j)
      ;

  // Unrolled loop body (4 times)
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;
  if (j)
    --j;

q:;
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}