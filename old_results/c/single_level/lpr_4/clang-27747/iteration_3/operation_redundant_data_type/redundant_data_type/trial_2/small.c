struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};
struct c i;

int main() {
  struct c l = {24, 6738, 165};
  l.d = i.e;
  int n = i.h && l.d;
  signed int p = l.d | -(l.f && l.d) - n;
  i.g = p;
}