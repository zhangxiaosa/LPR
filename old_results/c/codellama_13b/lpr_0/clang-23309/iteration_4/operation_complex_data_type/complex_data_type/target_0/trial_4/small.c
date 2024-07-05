c
unsigned fn2(unsigned p1, short p2) {
  unsigned high = p1 >> 16;
  unsigned low = p1 & 0xFFFF;
  short p2_low = p2 & 0xFFFF;
  short p2_high = p2 >> 16;
  
  unsigned result = high - p2_high;
  result &= 0xFFFF;
  result |= low - p2_low;
  
  return result;
}

unsigned fn6(unsigned p1, short p2) {
  unsigned high = p1 >> 16;
  unsigned low = p1 & 0xFFFF;
  short p2_low = p2 & 0xFFFF;
  short p2_high = p2 >> 16;
  
  unsigned result = high - p2_high;
  
  return result;
}

short w;
short ac = 1;

unsigned fn10(short p2) {
  unsigned an = 250;
  short p2_low = p2 & 0xFFFF;
  short p2_high = p2 >> 16;
  
  an = w;
  p2_low = ac || (an = w) == 0x294A85636008822D;
  
  unsigned result = fn2((short)0xBCD1 - (fn6(1, an) & 1) << 8, p2_low) & 1;
  
  return result;
}

int main() {
  printf("checksum = %X\n", fn10(0));
  return 0;
}
