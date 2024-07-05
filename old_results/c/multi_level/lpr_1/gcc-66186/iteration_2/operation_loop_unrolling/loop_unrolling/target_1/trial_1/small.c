#include <stdbool.h>

int h;
short ak[8];

int main() {
  unsigned p2;
  unsigned p3 = -7L;
  unsigned p4;

  for (p2 = 0; p2 <= 7; p2 += 1) {
    // Unrolled loop
    if (h < 0) {
      p4 = 0;
      if (ak[(unsigned short)p3]) {
        break;
      }
      p4 = 2;
      if (ak[(unsigned short)p3]) {
        break;
      }
      p4 = 4;
      if (ak[(unsigned short)p3]) {
        break;
      }
      p4 = 6;
      if (ak[(unsigned short)p3]) {
        break;
      }
    }
  }
}