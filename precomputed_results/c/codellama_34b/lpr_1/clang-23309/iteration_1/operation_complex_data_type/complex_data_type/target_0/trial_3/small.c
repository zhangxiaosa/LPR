
unsigned char ac_temp = ac;
for (w = 3; w; w--) {
  an = 250;
  p2 = ac_temp || (an = w) == 0x294A85636008822D;
  if (fn2(fn3(0xBCD1, 1 - an), p2) & 1)
    v = 1;
}
