struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 0, 0, 0};
  int m = j.e;
  int n = j.h & l.d;
  int p = -(l.f & l.d) - n;
  i.g = p;
  return 0;
}