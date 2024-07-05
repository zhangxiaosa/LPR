
void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1 - (p2 & 0xFFFF));
}
