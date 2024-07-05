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
  j.e = 24;
  j.f = 6738;
  j.g = 165;

  int n = j.h && j.e;
  i.g = j.e | -(6738 && j.e) - n;
}
