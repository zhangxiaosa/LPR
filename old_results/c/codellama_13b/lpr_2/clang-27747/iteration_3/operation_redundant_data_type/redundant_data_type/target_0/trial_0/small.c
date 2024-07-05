
short j_e;
short i_g;
short m;
struct c {
  short d : 18;
  short e;
  short f;
};
int main() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  m = j_e && l.d;
  i_g = l.d | -(l.f && l.d) - m;
}
