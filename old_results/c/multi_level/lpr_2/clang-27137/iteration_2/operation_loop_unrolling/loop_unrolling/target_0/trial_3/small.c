int main() {
  short q;
  q = 0;
  int s = 1L;

  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;

  printf("checksum = %X\n", q);
  return 0;
}