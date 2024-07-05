int main() {
  short r = 0;
  for (int i = 0; i < 10; i++)
    while (r > 1L)
      r -= 1;
  printf("checksum = %X\n", r);
  return 0;
}