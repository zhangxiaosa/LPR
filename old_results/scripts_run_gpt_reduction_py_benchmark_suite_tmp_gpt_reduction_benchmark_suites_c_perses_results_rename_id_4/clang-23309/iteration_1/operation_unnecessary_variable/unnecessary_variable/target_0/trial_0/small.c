int main() {
  long v;
  short w;
  short ac = 1;
  
  for (w = 3; w; w -= 1) {
    short ao = 0xBCD1;
    if ((ao - fn4(1 - w, 0xEC)) - (ac || (w == 0x294A85636008822D)) & 1)
      v = 1;
  }
  
  int p = v;
  printf("checksum = %X\n", p);
  return 0;
}