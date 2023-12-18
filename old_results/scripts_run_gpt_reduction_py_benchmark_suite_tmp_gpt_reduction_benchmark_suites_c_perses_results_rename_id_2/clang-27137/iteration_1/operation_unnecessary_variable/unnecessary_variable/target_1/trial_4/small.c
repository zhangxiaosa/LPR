int main() {
  short q;
  q = 0;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  while (q > 1L)
    q -= 1;
  printf("checksum = %X\n", q - 1);
  return 0;
}