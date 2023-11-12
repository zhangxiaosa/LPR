unsigned e;
long f;
short g;
short a = 1;
int main() {
  short d = 0xBCD1;
  g = 3;
  if (true) {
    h = a || (c = g) == 0x294A85636008822LL;
    if (d - (1 - c) - h & 1UL)
      f = 1UL;
  }
  e = f;
  printf("checksum = %X\n", e);
  return 0;
}