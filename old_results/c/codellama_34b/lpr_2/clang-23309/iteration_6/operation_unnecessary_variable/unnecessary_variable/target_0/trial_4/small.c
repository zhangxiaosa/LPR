
int main() {
  short an = 0x294A;
  t = 1 || (an = 0);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  printf("checksum = %d\n", temp - t & 1);
  return 0;
}
