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
  j.d = j.e;
  b n = j.h && l.d;
  b o = l.d;
  a p = o | -(l.f && j.d) - n;
  i.g = p;
}