scss
int main() {
  int t;
  short w;
  unsigned ac = 1;

  w = 0;

  int temp = 0xBCD1 - (1 - 0x294A);
  printf("checksum = %d\n", temp & 1);

  return 0;
}
