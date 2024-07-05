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
  int l_d = 24;
  unsigned int l_e = 6738;
  unsigned int l_f = 165;

  b m = j.e;
  l_d = m;

  b n = j.h && l_d;
  b o = l_d;

  signed p = o | -(l_f && l_d) - n;
  i.g = p;
}