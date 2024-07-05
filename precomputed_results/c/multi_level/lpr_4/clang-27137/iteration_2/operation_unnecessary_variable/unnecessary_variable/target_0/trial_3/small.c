int main() {
  long q;
  q = 0;
  for (; q < 10; q++)
    while (q > 1L)
      q -= 1;
  printf("checksum = %lX\n", q);
  return 0;
}