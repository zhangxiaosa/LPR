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
  b m = j.e;
  j.e = m;
  b n = j.h && j.e;
  b o = j.e;
  signed p = o | -(l.f && j.e) - n;
  i.g = p;
}