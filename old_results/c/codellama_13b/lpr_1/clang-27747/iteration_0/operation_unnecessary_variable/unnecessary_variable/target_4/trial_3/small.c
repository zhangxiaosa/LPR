
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
  int n = j.h && l.d; // Constant propagation: n = j.h && 24 = j.h
  int o = 24;        // Constant propagation: o = 24
  signed p =
      o | -(165 && l.d) - n; // Copy propagation: p = 24 | -(165 && 24) - j.h
  i.g = p;
}

int main() {}
