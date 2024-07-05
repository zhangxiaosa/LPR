#include <stdint.h>

int g;
int h;

unsigned fn4(int, uint16_t, uint16_t, unsigned, uint16_t);

int fn5() {
  int32_t p3 = 0x57638FF4;
  
  // Loop unrolled iterations
  // Loop iteration 1:
  if (fn4(0x9A5D, g, p3, g, g))
    ;
  
  // Loop iteration 2:
  if (fn4(0x9A5D, g + 1, p3, g, g))
    ;
  
  // Loop iteration 3:
  if (fn4(0x9A5D, g + 2, p3, g, g))
    ;
  
  // Loop iteration 4:
  if (fn4(0x9A5D, g + 3, p3, g, g))
    ;
  
  // Loop iteration 5:
  if (fn4(0x9A5D, g + 4, p3, g, g))
    ;
  
  // Loop iteration 6:
  if (fn4(0x9A5D, g + 5, p3, g, g))
    ;
  
  // Loop iteration 7:
  if (fn4(0x9A5D, g + 6, p3, g, g))
    ;
  
  // Loop iteration 8:
  if (fn4(0x9A5D, g + 7, p3, g, g))
    ;
  
  return 0xA3;
}

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4, uint16_t p5) {
  int16_t ak[8];
  
  // Code inside the loop body
  if (h < 0) {
    for (p4 = 0; p4 <= 7; p4 += 1) {
      if (ak[p3]) {
        break;
      }
    }
  }
  
  return g;
}

int main() {
  fn5();
}