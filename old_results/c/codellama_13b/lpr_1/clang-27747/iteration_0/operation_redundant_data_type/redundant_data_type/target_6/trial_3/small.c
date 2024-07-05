
struct c {
  int d : 18;
  unsigned e;
  unsigned f;
  int g;
  int h;
} i, j;

int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  int p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() {}
