#include <stdint.h>

int g;
int h;

int main() {
  int16_t ak[8];

  for (; g <= 7; g += 1) {
    for (g = 0; g <= 7; g += 1) {
      if (h < 0) {
        for (g = 0; g <= 7; g += 1) {
          if (ak[g]) {
            break;
          }
        }
      }
    }
  }

  return g;
}