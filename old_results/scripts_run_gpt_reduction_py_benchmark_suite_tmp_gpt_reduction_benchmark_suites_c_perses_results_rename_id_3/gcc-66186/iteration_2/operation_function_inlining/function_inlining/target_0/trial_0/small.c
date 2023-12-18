#include <stdint.h>
int g;
int h;
int main() {
  int32_t p3 = 0x57638FF4;
  {
    int16_t ak[8];
    unsigned p4 = g;
    for (; g <= 7; g += 1) {
      for (p4 = 0; p4 <= 7; p4 += 1) {
        if (h < 0) {
          for (p4 = 0; p4 <= 7; p4 += 1) {
            if (ak[p3]) {
              goto fn4_end;
            }
          }
        }
      }
    }
  }
fn4_end:
  return g;
}
