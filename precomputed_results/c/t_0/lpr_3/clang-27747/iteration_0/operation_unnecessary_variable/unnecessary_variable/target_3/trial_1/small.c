typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;

b fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  b n = j.h && l.d;
  signed p = -(l.f && l.d) - n;
  i.g = p;
}