unsigned h;
short o;
char p;

int main() {
  short q;
  int i;
  q = o;
  int s = 1L;

  // Unroll the loop by a factor of 2
  for (i = 0; i < 10; i += 2) {
    // Unrolled iteration 1
    while (q > s)
      q -= 1;

    // Unrolled iteration 2
    while (q > s)
      q -= 1;
  }

  if (p = q)
    ;

  h = p;
  printf("checksum = %X\n", h);
  return 0;
}