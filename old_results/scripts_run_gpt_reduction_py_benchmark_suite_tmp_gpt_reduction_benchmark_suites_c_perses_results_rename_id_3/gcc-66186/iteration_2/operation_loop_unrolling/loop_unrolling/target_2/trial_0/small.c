#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int16_t ak[8];

  // Unrolled outer loop
  if (g <= 7) {
    // Unrolled inner loop
    if (p4 <= 7) {
      if (h < 0) {
        // Unrolled innermost loop
        if (ak[p3])
          ;
        if (++p4 <= 7) {
          if (ak[p3])
            ;
          if (++p4 <= 7) {
            if (ak[p3])
              ;
            if (++p4 <= 7) {
              if (ak[p3])
                ;
              if (++p4 <= 7) {
                if (ak[p3])
                  ;
                if (++p4 <= 7) {
                  if (ak[p3])
                    ;
                  if (++p4 <= 7) {
                    if (ak[p3])
                      ;
                    if (++p4 <= 7) {
                      if (ak[p3])
                        ;
                    }
                  }
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
  int32_t p3 = 0x57638FF4;

  if (fn4(0x9A5D, g, p3, g))
    ;
}