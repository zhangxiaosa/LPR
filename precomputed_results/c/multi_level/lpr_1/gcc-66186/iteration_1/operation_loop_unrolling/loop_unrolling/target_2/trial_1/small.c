int h;

int main() {
  unsigned p2;
  unsigned short p3 = -7L;
  unsigned p4;
  short ak[8];

  for (p2 = 0; p2 <= 7; p2 += 1) {
    // Unrolled loop segment
    if (ak[p3])
      break;
    
    if (ak[p3 + 2])
      break;
    
    if (ak[p3 + 4])
      break;
    
    if (ak[p3 + 6])
      break;
  }
}