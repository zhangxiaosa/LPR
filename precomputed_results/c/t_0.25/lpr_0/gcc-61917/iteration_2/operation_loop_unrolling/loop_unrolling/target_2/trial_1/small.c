#include <iostream>

int k;
unsigned l;
volatile unsigned m_2_5;

unsigned fn3(unsigned p1) {
  for (;;) {
    for (; l; l++) {
      k = 0;
      p1 = 0x4FL - p1;
      k = k - 6;
      p1 = 0x4FL - p1;
      k = k - 6;
      p1 = 0x4FL - p1;
      k = k - 6;
      p1 = 0x4FL - p1;
      k = k - 6;
      p1 = 0x4FL - p1;
    }
    if (p1)
      m_2_5;
  }
}

int main() {}