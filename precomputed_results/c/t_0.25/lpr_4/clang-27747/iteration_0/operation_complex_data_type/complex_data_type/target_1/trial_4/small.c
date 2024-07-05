struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

signed int j_d;
unsigned int j_e;
unsigned int j_f;
signed int j_g;
signed int j_h;

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int m = j_e;
  l.d = m;
  int n = j_h && l.d;
  int o = l.d;
  signed int p = o | -(l.f && l.d) - n;
  i.g = p;
}