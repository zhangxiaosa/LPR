#include<stdio.h>

unsigned g;
int h2 = 0x92A1D2CDL;

signed fn1() {
  // Loop unrolled
  int r[5][9][5];
  
  if (h2)
    return 0xC3L;
  
  g = r[0x06D7L][0x06D7L][0x06D7L];
  
  // Loop unrolled
  if (h2)
    return 0xC3L;
  
  g = r[0x06D7L][0x06D7L][0x06D7L];
  
  // Loop unrolled
  if (h2)
    return 0xC3L;
  
  g = r[0x06D7L][0x06D7L][0x06D7L];
  
  // Loop unrolled
  if (h2)
    return 0xC3L;
  
  g = r[0x06D7L][0x06D7L][0x06D7L];

  // Repeat more times as needed
  
  return 0xC3L;
}

signed main() {
  fn1();
}