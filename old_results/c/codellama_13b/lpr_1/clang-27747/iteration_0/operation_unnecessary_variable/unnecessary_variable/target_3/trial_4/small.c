
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;
int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int o = l.d;
  signed p = o | -(165 && l.d);
  i.g = p;
}
int main() {}
