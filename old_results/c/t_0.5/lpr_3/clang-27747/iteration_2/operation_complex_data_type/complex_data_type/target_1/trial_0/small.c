struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

int main() {
  struct c l = {24, 6738, 165};
  l.d = j_e;
  int n = j_h && l.d;
  j_g = l.d | -(j_f && l.d) - n;
}