struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};
struct c i;
struct c j;
int fn1() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  int n = j.h && l.d;
  i.g = -(l.f && l.d) - n;
}