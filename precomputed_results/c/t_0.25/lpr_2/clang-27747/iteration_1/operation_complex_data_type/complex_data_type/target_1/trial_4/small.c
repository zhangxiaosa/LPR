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

  signed int l_temp_d = j.e;
  l_temp.d = l_temp_d;

  signed int j_h = j.h;
  signed int n = j_h && l_temp_d;

  i.g = l_temp.d | -(l_temp.f && l_temp.d) - n;
}
