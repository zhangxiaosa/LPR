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
  int n = j_h && l.d;
  signed p = l.d | -(l.f && l.d) - n;
  i.g = p;
}