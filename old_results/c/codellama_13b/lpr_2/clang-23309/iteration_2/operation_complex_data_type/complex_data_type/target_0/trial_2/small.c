
unsigned short ab;

int main() {
  ab = 0x2F2F6D26L;
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

void fn13() {
  fn10(v, t);
  return 0;
}

unsigned short fn10(short p1, short p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}

unsigned short fn12(short p1, short p2, short p3, short p4, short p5) {
  short al = 3L;
  short am = 1L;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    short ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}

unsigned short fn2(unsigned short p1, unsigned short p2) {
  return p1 - p2;
}

unsigned short fn3(unsigned short p1, unsigned short p2) {
  return p1 - p2;
}

unsigned short fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned short fn5(unsigned short p1, unsigned short p2) {
  return p1 - p2;
}

unsigned short fn6(short p1, short p2) {
  return p1 - p2;
}

unsigned short bitwise_and(unsigned short p1, unsigned short p2) {
  return p1 & p2;
}

unsigned short bitmask(unsigned short p1) {
  return p1 & 0xFF;
}

unsigned short look_up_table[256] = {0};

void init_look_up_table() {
  for (int i = 0; i < 256; i++) {
    look_up_table[i] = bitmask(i);
  }
}

int main() {
  init_look_up_table();
  ab = 0x2F2F6D26L;
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}

unsigned short optimized_fn13() {
  unsigned short p1 = v;
  unsigned short p2 = t;
  unsigned short p3 = 2;
  unsigned short p4 = 248;
  unsigned short p5 = 1;
  short al = 3;
  short am = 1;
  short an;
  for (w = 3; w; w -= 1) {
    an = 250;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1)
      v = 1;
  }
  return al;
}

int main() {
  ab = 0x2F2F6D26L;
  optimized_fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
