
struct c {
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;
int fn1() {
  struct c l = {6738, 165};
  l.e = j.e;
  int n = j.h && l.e;
  int o = l.e;
  signed p = o | -(l.f && l.e) - n;
  i.g = p;
}
int main() {}
