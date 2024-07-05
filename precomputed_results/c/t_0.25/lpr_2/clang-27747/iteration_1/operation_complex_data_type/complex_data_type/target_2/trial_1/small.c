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
  struct OriginalDataType l_temp = {24, 6738, 165};
  signed int l_temp_d = l_temp.d;
  unsigned int l_temp_e = l_temp.e;
  unsigned int l_temp_f = l_temp.f;
  signed int l_temp_g = l_temp.g;
  signed int l_temp_h = l_temp.h;

  l_temp_d = j.e;
  int n = j.h && l_temp_d;
  i.g = l_temp_d | -(l_temp_f && l_temp_d) - n;

  return 0;
}