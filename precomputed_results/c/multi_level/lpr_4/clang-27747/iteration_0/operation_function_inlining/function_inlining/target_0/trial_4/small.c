typedef signed a;
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
int main() {
  struct c l = {24, 6738, 165};
  j.e;
  l.d = j.e;
  j.h;
  l.d;
  j.h && l.d;
  -(l.f && l.d);
  -(l.f && l.d) - (j.h && l.d);
  o | (-(l.f && l.d) - (j.h && l.d));
  i.g = o | (-(l.f && l.d) - (j.h && l.d));
}