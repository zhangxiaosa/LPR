int loop_var;
int main() {
  int q;
  q = loop_var;

  // Unrolled loop iteration 1
  while (q > 1L)
    q -= 1;

  // Unrolled loop iteration 2
  while (q > 1L)
    q -= 1;

  // Unrolled loop iteration 3
  while (q > 1L)
    q -= 1;

  // Unrolled loop iteration 4
  while (q > 1L)
    q -= 1;

  // Unrolled loop iteration 5
  while (q > 1L)
    q -= 1;

  printf("checksum = %X\n", q);
  return 0;
}