
unsigned short w;
unsigned short ac = 1;
unsigned short an_high = 250;
unsigned short an_low = 0;
unsigned short p2 = ac || (an_high = w) == 0x294A85636008822D;
unsigned short p1 = (short)0xBCD1 - (fn6(1, an_high) & 1) << 8;
unsigned short result = fn2(p1, p2) & 1;
printf("checksum = %X\n", result);
