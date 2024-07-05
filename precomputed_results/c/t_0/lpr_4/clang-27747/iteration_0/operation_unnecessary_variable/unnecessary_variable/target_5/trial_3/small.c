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
  l.d = j_e;
  b n = j_h && l.d;
  b o = l.d;
  signed p = l.d | ((l.f && l.d) ? -1 - n : 0 - n);
  i.g = p;
}