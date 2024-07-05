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
  l_temp.d = j.e;
  i.g = l_temp.d | -(l_temp.f && l_temp.d) - (j.h && l_temp.d);
}