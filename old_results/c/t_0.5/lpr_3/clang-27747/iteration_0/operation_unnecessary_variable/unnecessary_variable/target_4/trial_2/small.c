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

b main() {
  struct c l = {24, 6738, 165};
  l.d = j.e;
  b n = j.h && j.e;
  signed p = j.e | -(l.f && j.e) - (j.h && j.e);
  i.g = p;
}