typedef int b;

struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
  signed h;
};

struct c i;
struct c j;
b main() {
  b l_d;
  unsigned l_e;
  unsigned l_f;
  signed l_g;
  signed l_h;

  l_d = 24; l_e = 6738; l_f = 165;
  b m = j.e;
  l_d = m;
  b n = j.h && l_d;
  b o = l_d;
  signed p = o | -(l_f && l_d) - n;
  i.g = p;
}