
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned v;
unsigned char w;
unsigned ac = 1;
short fn13() {
  fn2(fn3(0xBCD1, 1 - 250), ac || 0x294A85636008822D);
  return 1;
}
int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}
