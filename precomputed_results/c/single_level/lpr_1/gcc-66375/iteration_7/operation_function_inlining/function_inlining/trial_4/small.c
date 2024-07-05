#include <iostream>

char fn2(char p1, int p2) { return p1; }

unsigned p;

void fn5(int p1) { p = p1; }

unsigned u;

unsigned v_0_3;

short fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = fn2(v_0_3 = static_cast<short>(d), 3) + e[0];
  }
  return 0;
}

int main() {
  fn11();
  fn5(v_0_3);
  std::cout << "checksum = " << std::hex << p << std::endl;
  return 0;
}