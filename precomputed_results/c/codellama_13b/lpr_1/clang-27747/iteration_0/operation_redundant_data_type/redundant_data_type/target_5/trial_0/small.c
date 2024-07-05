
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
  l.d = j.h && l.d;
  i.g = l.d | -(l.f && l.d);
}

int main() {}
