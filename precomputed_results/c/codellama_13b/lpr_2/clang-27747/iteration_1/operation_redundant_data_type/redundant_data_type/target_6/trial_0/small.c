
struct c {
  unsigned int d : 18;
  unsigned int e;
  unsigned int f;
};

unsigned int i_g;
unsigned int j_e;
unsigned int j_h;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  unsigned int n = j_h && l.d;
  i_g = l.d | -(l.f && l.d) - n;
}
