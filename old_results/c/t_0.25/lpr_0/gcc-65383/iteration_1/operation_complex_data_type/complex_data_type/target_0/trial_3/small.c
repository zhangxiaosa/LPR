#include <stdio.h>

unsigned int g;
int h2 = 0x92A1D2CDL;

int main() {
  for (;;) {
    int r_0 = 0x06D7L;
    int r_1 = 0x06D7L;
    int r_2 = 0x06D7L;
    int g_temp;

    if (h2)
      break;

    g_temp = r_0;
    g_temp = g_temp * 9 + r_1;
    g_temp = g_temp * 5 + r_2;
    g = g_temp;
  }
}