short ak[8];
unsigned p2;
unsigned short p3 = 4294967289L;
unsigned p4;

p2 = 0;
for (; p2 <= 7; p2 += 2) {
  // No loop body, inline the code here
}

for (p4 = 0; p4 <= 7; p4 += 1) {
  if (g < 0) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3])
        break;
    }
  }
}