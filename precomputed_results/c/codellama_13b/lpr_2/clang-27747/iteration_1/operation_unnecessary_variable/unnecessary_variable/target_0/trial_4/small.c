
int j_h;
int n;
struct c {
  int d : 18;
  int e;
  int f;
};
int i_g;

int main() {
  struct c l = {24, 6738, 165};
  l.d = 165; // j_e is unused, so we can optimize it out
  n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}
