
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
  b m = j.e;
  l.d = m;
  b n = j.h && l.d;
  b o = l.d;
  a p = o | -(l.f && l.d) - n;
  i.g = p;
  for (int k = 0; k < 10; k++) {
    j.h = j.h && l.d;
    l.d = m;
    n = j.h && l.d;
    o = l.d;
    p = o | -(l.f && l.d) - n;
    i.g = p;
  }
}
