#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int16_t ak[8];

  // Unrolled outer loop
  if (g <= 7) {
    p4 = 0;

    // Unrolled middle loop
    if (p4 <= 7) {
      if (h < 0) {
        p4 = 0;

        // Unrolled inner loop
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
        p4 += 1;
        if (ak[p3]) {
          goto loop_end;
        }
      }
    }
  }

loop_end:
  return g;
}

int main() {
  int32_t p3 = 0x57638FF4;
  if (fn4(0x9A5D, g, p3, g))
    ;
}