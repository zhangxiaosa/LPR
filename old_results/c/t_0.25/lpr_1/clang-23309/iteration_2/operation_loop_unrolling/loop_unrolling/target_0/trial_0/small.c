char fn4(unsigned p1, unsigned p2) { 
  return p1; 
}

unsigned p;
int v;
short w;
short ac = 1;

int main() {
  int an;
  
  // First iteration
  w = 3;
  if (an = 250) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }
  
  // Second iteration
  w -= 1;
  if (an = 250) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }
  
  // Third iteration
  w -= 1;
  if (an = 250) {
    unsigned p2 = ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }
  
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}