
int main() {
  unsigned short v = 0;
  unsigned short p;
  unsigned short w;
  unsigned short ac = 1;
  unsigned short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    if (an == 0x294A85636008822D)
      v = 1;
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
