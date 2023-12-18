int h;
int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;
  short ak[8];
  
  for (p2 = 0; p2 <= 7; p2 += 1) {
    if (h < 0) {
      // Unrolled iteration 1
      p4 = 0;
      if (ak[(unsigned short)p3])
        break;
      p4 += 2;
      if (ak[(unsigned short)p3])
        break;
      
      // Unrolled iteration 2
      p4 = 0;
      if (ak[(unsigned short)p3])
        break;
      p4 += 2;
      if (ak[(unsigned short)p3])
        break;
    }
  }
}