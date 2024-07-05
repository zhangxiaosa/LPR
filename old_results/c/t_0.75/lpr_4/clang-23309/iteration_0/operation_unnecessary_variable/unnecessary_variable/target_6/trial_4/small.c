int t;
long v;
short w;
short ac = 1L;

int main() {
  for (w = 3; w; w -= 1) {
    if (1) {
      short ao = 0xBCD1L;
      if ((ao - 1L) - ac & 1UL)
        v = 1UL;
    }
  }
  printf("checksum = %lx\n", v);
  return 0;
}