
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
  int n = j.h && l.d;
  int o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() {
  struct c k = {0, 0, 0, 0, 0};
  struct c m = {0, 0, 0, 0, 0};
  fn1(k, m);
  return 0;
}
