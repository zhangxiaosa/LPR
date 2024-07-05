short g;
int main() {
  short ak[8];
  unsigned p2;
  unsigned short p3 = 4294967289L;
  unsigned p4;
  
  for (p2 = 0; p2 <= 7 - 1; p2 += 2) {
    // Unrolled iteration 1
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (g < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;

    // Unrolled iteration 2
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (g < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  }
}