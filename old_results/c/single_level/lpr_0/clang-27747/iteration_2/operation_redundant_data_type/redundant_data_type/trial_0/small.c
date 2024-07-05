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
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  signed int p = l.d | -(l.f && l.d) - n;
  i.g = p;
}