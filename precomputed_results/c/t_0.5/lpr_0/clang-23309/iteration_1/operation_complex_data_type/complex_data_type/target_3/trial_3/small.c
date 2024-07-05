unsigned p = 0;

int main() {
  for (short w = 3; w; w -= 1) {
    int an = 250UL;
    int t = 1;
    short ao = 0xBCD1L;
    if ((ao - 1) - t & 1)
      p = 1;
  }

  printf("checksum = %d\n", p);
  return 0;
}