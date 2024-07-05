#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int16_t ak[8];
  
  // Unrolled loop iterations
  if (ak[p3]) {
    p4 = 0;
    if (ak[p3]) {
      p4 = 1;
      if (ak[p3]) {
        p4 = 2;
        if (ak[p3]) {
          p4 = 3;
          if (ak[p3]) {
            p4 = 4;
            if (ak[p3]) {
              p4 = 5;
              if (ak[p3]) {
                p4 = 6;
                if (ak[p3]) {
                  p4 = 7;
                  if (ak[p3])
                    break;
                }
              }
            }
          }
        }
      }
    }
  }
  
  return g;
}

int main() {
  if (fn4(g, g, 0x57638FF4, g))
    ;
}