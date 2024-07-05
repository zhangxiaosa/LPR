
struct c {
  unsigned d;  // signed d : 18;
  unsigned e;
  unsigned f;
  unsigned g;  // signed g;
  unsigned h;  // signed h;
} i, j;

int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  int o = l.d;
  unsigned p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() { i.g = j.h && j.e; }
