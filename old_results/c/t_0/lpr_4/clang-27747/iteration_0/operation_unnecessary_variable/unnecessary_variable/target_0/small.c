typedef int b;
int j_e;
int j_h;
struct c {
  signed d : 18;
  unsigned f;
  signed g;
};
struct c i;
int main() {
  struct c l;
  l.f = 165;
  b m = j_e;
  l.d = m;
  b n = j_h && l.d;
  b o = l.d;
  signed p = o | -(l.f && l.d) - n;
  i.g = p;
}
