#include <stdint.h>

int g;
int h;

int fn4(int p1, int p2, int p3, int p4) {
  int ak[8];
  for (; g <= 7; g += 1)
    for (p4 = 0; p4 <= 7; p4 += 1)
      if (h < 0)
        for (p4 = 0; p4 <= 7; p4 += 1)
          if (ak[p3])
            break;
  return g;
}

int main() {
  if (fn4(g, g, g, g))
    ;
}