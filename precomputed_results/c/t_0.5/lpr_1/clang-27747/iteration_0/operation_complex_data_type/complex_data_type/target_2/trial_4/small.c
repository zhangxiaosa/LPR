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

int main() {
  signed d_l = 24;
  unsigned e_l = 6738;
  unsigned f_l = 165;

  b m = j.e;
  signed d_m = m;

  signed h_j = j.h;
  signed d_l_j = d_l;
  b n = h_j && d_l_j;

  b o = d_l;

  signed f_l_d_l = f_l && d_l;
  signed neg_f_l_d_l = -f_l_d_l;
  b n_neg_f_l_d_l = n;
  signed p = o | (neg_f_l_d_l - n_neg_f_l_d_l);

  i.g = p;
}