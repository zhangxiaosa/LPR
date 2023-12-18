#include <stdint.h>

int g;
int h;

unsigned fn4(int p1, uint16_t p2, uint16_t p3, unsigned p4) {
  int ak[8];
  unsigned primaryP3 = (unsigned)p3;  // Decomposed 'p3' as 'primaryP3' of type 'unsigned'

  for (; g <= 7; g += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[primaryP3])
            break;

  return g;
}

int main() {
  if (fn4(g, g, 1525311636, g))
    ;
}