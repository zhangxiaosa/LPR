long o;
signed main() {
  short r = o;
  for (o = 0; o < 10; o++)
    while (r > 1L)
      r -= 1;
  printf("checksum = %X\n", r);
  return 0;
}
