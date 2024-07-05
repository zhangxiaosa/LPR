
#include <stdint.h>

int16_t d = 24;
uint16_t e = 6738;
uint16_t f = 165;
int16_t g = 0;
int16_t h = 0;

int main() {
  int m = e;
  d = m;
  int n = h && d;
  int o = d;
  int p = o | -(f && d) - n;
  g = p;
}
