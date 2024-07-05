
int j_e;
short i_g;
short m;
struct c {
  int d : 18;
  int e;
  int f;
};
int main() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  m = j_e && l.d;
  i_g = l.d | -(l.f && l.d) - m;
  // Loop unrolling
  int i;
  for (i = 0; i < 16; i++) {
    l.d = j_e;
    m = j_e && l.d;
    i_g = l.d | -(l.f && l.d) - m;
  }
}
