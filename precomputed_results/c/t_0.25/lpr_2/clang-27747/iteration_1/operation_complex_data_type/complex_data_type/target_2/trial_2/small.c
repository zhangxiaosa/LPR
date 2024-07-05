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
  signed int l_temp_d = 24;
  unsigned int l_temp_e = 6738;
  unsigned int l_temp_f = 165;

  l_temp_d = j.e;
  int n = j.h && l_temp_d;
  i.g = l_temp_d | -(l_temp_f && l_temp_d) - n;
}