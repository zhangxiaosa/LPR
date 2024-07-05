short fn11(short p1, short p3) {
  short an;
  if (an = 250) {
    p3 = p1 | (an = 0);
    int ao = 0xBCD1;
    if (((short)(ao - 1 + an - p3) & 1))
      v = 1;
  }
  return 1;
}

int main() {
  fn11(2, 0);
  printf("checksum = %hd\n", v);
  return 0;
}