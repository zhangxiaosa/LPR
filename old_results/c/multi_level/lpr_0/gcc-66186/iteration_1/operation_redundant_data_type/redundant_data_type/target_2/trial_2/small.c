#include <stdio.h>

int main() {
  unsigned ak[8];
  unsigned p2;
  unsigned p3 = 4294967289L;
  for (p2 = 0; p2 <= 7; p2 += 1)
    for (unsigned p4 = 0; p4 <= 7; p4 += 1)
      if (ak[p3] > 0)
        break;

  return 0;
}