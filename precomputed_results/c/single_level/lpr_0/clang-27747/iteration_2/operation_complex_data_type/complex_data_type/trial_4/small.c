struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

unsigned d_j;
unsigned e_j;
unsigned f_j;
signed g_j;
signed h_j;

unsigned d_l;
unsigned e_l = 6738;
unsigned f_l = 165;
signed g_l;
signed h_l;

struct c i;
struct c j;

int main() {
  struct c l;
  d_l = 24;
  l.d = d_l;
  l.e = e_l;
  l.f = f_l;
  l.g = g_l;
  l.h = h_l;

  d_j = j.e;
  e_j = j.e;
  f_j = j.f;
  g_j = j.g;
  h_j = j.h;

  int n = h_j && d_l;
  signed p = d_l | -(f_l && d_l) - n;
  i.g = p;
}