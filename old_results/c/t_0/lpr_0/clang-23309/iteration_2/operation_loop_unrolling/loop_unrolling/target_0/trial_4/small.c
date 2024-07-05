int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned p;
int t;
short w;
short ac = 1L;

int main() {
  int an;
  
  if (an = 250UL) {
    t = ac || (an = 3) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(1L - an, 0xECL)), t) & 1UL)
      p = 1UL;
  }
  
  if (an = 250UL) {
    t = ac || (an = 2) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(1L - an, 0xECL)), t) & 1UL)
      p = 1UL;
  }
  
  if (an = 250UL) {
    t = ac || (an = 1) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(1L - an, 0xECL)), t) & 1UL)
      p = 1UL;
  }
  
  printf("checksum = %X\n", p);
  return 0;
}