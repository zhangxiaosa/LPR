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
  signed l_d = 24;
  unsigned l_e = 6738;
  unsigned l_f = 165;
  unsigned l_g;
  signed l_h;

  l_d = j.e;

  int n = j.h && l_d;

  signed p = l_d | -(l_f && l_d) - n;

  i.g = p;
}