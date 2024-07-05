
struct c {
  unsigned d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
} i, j;

int fn1() {
  struct c l = {24, 6738, 165};
  unsigned m = j.e;
  l.d = m;
  signed n = j.h && l.d;
  unsigned o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;
}

int main() {}
