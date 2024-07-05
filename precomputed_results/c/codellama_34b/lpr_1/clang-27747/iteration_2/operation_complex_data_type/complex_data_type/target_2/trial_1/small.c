
#include <iostream>

struct c {
  int d : 18;
  int e;
  int g;
};

int main() {
  struct c i;
  i.d = 10;
  i.e = 20;
  i.g = 30;

  int l_d = i.e;
  int l_e = i.d && l_d;
  int l_g = l_d | -(l_d && l_d) - l_e;

  std::cout << "l_d: " << l_d << std::endl;
  std::cout << "l_e: " << l_e << std::endl;
  std::cout << "l_g: " << l_g << std::endl;

  return 0;
}
