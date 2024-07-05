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
  signed d_l = 24;
  unsigned e_l = 6738;
  unsigned f_l = 165;
  signed g_l;
  signed h_l;

  int m = j.e;
  d_l = m;
  int n = j.h && d_l;
  int o = d_l;
  signed p = o | -(f_l && d_l) - n;
  g_l = p;
}