{
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

    d_l = j.e;
    int n = j.h && d_l;
    i.g = d_l | -(f_l && d_l) - n;
  }
}