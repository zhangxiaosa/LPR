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
  j.e = j.e;
  int n = j.h && j.e;
  i.g = j.e | -(j.e && j.f) - n;
}