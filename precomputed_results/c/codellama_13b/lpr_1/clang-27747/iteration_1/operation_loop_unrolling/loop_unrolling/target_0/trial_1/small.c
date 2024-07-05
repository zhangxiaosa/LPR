c
struct c {
  signed d : 18;
  unsigned e;
  signed g;
  signed h;
};

int main() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;

  // Optimize using loop unrolling
  for (int i = 0; i < 4; i++) {
    signed p = l.d | -(165 && l.d) - n;
    l.g = p;
  }
}
