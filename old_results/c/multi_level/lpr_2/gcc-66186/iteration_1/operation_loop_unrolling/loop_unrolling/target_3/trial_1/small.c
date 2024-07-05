int h;
short ak[8];
unsigned p2;
unsigned short p3 = -7L;
unsigned p4;
short temp_ak_p3;

for (p2 = 0; p2 <= 7; p2 += 1) {
  for (p4 = 0; p4 <= 3; p4 += 1) {
    temp_ak_p3 = ak[p3];
    
    if (h < 0 && temp_ak_p3)
      break;
    
    p4 += 1;
    temp_ak_p3 = ak[p3 + p4];
    
    if (h < 0 && temp_ak_p3)
      break;
  }

  // For the remaining iterations, process them individually
  for (; p4 <= 7; p4 += 1) {
    if (h < 0 && ak[p3 + p4])
      break;
  }
}