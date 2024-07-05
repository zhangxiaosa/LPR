#include <stdio.h>

struct OriginalDataType {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct OriginalDataType i;
struct OriginalDataType j;

int main() {
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

  signed int l_temp_d;
  unsigned int l_temp_e;
  unsigned int l_temp_f;
  signed int l_temp_g;
  signed int l_temp_h;

  l_temp_d = 24;
  l_temp_e = 6738;
  l_temp_f = 165;

  i_d = j_e;

  int n = j_h && l_temp_d;

  i_g = l_temp_d | -(l_temp_f && l_temp_d) - n;

  return 0;
}