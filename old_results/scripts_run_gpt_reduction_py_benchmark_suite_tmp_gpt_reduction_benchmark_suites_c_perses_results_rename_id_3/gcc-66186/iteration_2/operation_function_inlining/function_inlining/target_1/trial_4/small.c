#include <stdint.h>

int g;
int h;

int main() {
  int32_t p3 = 0x57638FF4;
  
  int16_t ak[8];
  
  for (; g <= 7; g += 1) {
    unsigned p4;
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (h < 0) {
        for (p4 = 0; p4 <= 7; p4 += 1) {
          if (ak[p3]) {
            break;
          }
        }
      }
    }
  }
  
  if (g >= 0x9A5D && g <= 7 && h < 0 && ak[p3]) {
    ;
  }
  
  return 0xA3;
}
