#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, unsigned int p3_opt, unsigned p4) {
  int ak[8];
  for (; g <= 7; g += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3_opt])
            break;
  return g;
}

int main() {
  if (fn4(g, g, 1525311636, g))
    ;
}