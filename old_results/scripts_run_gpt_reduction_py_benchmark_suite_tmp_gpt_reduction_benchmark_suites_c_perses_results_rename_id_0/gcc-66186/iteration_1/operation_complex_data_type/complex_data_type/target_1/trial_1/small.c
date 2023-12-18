#include <stdio.h>

int main() {
  short g;
  short ak[8];
  unsigned int p2;
  unsigned short p3 = 65535;
  unsigned int p4;
  
  for (p2 = 0; p2 <= 7; p2 += 1) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (g < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  
  return 0;
}