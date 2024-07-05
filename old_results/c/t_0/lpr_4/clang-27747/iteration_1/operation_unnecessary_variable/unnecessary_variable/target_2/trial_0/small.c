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
  int o = l.d;
  signed p = o | -(l.f && l.d) - (j_h && l.d);
  i.g = p;
}