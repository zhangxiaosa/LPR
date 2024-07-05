int h;
unsigned p2;
unsigned long p3_value = -7L;
unsigned p4;
short ak1, ak2, ak3, ak4, ak5, ak6, ak7, ak8;

for (p2 = 0; p2 <= 7; p2 += 4) {
  for (p4 = 0; p4 <= 7; p4 += 4) {
    if (h < 0) {
      for (p4 = 0; p4 <= 7; p4 += 4) {
        if (ak[p3_value])
          break;
        if (ak[p3_value + 1])
          break;
      }
    }
  }
}