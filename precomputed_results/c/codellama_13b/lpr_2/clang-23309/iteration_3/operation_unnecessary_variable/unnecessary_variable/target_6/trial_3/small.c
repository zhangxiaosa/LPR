
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
short fn5(short p1, short p2) { return p2; }
short fn6(short p1, short p2) { return p1 - p2; }

int main() {
  short value = 250UL;
  printf("checksum = %X\n", value);
  return 0;
}
