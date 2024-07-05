#include <stdio.h>

struct OriginalDataType {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

int main() {
  struct OriginalDataType i;
  struct OriginalDataType j;
  signed int i_d;
  unsigned int i_e;
  unsigned int i_f;
  signed int i_g;
  signed int i_h;
  signed int j_d;
  unsigned int j_e;
  unsigned int j_f;
  signed int j_g;
  signed int j_h;

  struct OriginalDataType l_temp = {24, 6738, 165};
  l_temp.d = j_e;
  int n = j_h && l_temp.d;
  i_g = l_temp.d | -(l_temp.f && l_temp.d) - n;

  // Optimized target variable j
  // Optimize j_d and j_h

  // Rest of the program

  return 0;
}