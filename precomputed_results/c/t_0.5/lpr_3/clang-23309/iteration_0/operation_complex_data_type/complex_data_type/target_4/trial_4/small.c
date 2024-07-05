unsigned int fn6(unsigned int p1, unsigned int p2) {
  return p1 - p2;
}

unsigned int p;
long v;
short w;
short ac = 1;

int main() {
  long am = 1L;
  int an;
  
  unsigned int optimized_p2 = ac || (an = w) == 0x294A85636008822D; // Modify p2 to use unsigned int
  
  short ao = 0xBCD1;
  
  if ((ao - (fn6(am, an) - 0xEC)) - optimized_p2 & 1U) { // Use optimized_p2
    v = 1UL;
  }
  
  p = v;
  printf("checksum = %X\n", p);
  
  return 0;
}