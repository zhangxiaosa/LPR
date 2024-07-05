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
  m = m;
  b n = j.h && m;
  b o = m;
  signed p = o | -(l.f && m) - n;
  i.g = p;
}