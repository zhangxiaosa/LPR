#include <stdio.h>

char fn2(char p1, int32_t p2) { return p1; }

short fn3(int16_t p1, int16_t p2) { return p2; }

int32_t g;
int32_t u;
int32_t v[1][4];

int32_t fn10(int32_t p1, int32_t p2, int32_t p3, int32_t p4) {
  int32_t d_ = 2;
  for (; u < 51; ++u) {
    v[0][3] = fn3(4, (int16_t)d_);
    d_ = (int32_t)fn2(v[0][3], 3) + 0x9EE7F9D1C772505BLL;
  }
  g = v[0][3]; // Assign v[0][3] directly to g
  return 3;
}

short fn11(void) {
  fn10(6, (int32_t)255UL, 1, 0);
  return 0;
}

int main() {
  fn11();
  printf("checksum = %Xu\n", (uint32_t)g);
  return 0;
}