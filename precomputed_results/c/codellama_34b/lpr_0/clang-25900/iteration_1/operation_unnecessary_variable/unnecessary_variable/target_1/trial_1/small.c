
#include <stdint.h>

int32_t g(int32_t p1, int32_t p2) { return p2; }

int32_t r;
int32_t t;

int main() {
  r = t % (~5 / 5);
}
