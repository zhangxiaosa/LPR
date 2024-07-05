int i_g;

int main() {
  struct {
    signed d : 18;
    unsigned e;
    unsigned f;
    signed g;
    signed h;
  } l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  signed int p = o | -(l.f && l.d) - n;
  i_g = p;
}