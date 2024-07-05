
fn2(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned fn3(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned fn5(unsigned p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }
unsigned short fn12(unsigned short, unsigned short, unsigned short,
                    unsigned short);
unsigned fn13() { return fn12(2L, 248UL, 3, 0x2F2F6D26L); }
unsigned short fn12(unsigned short p1, unsigned short p2, unsigned short p3,
                    unsigned short p4) {
  for (unsigned an = 3; an; an -= 1) {
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      return 1UL;
  }
  return 3L;
}
int main() {
  unsigned value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
