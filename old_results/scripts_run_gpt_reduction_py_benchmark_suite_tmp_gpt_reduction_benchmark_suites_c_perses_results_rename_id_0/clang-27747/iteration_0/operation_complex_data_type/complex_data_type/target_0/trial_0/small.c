struct c {
  signed int d;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  signed int l_d;
  unsigned int l_e;
  unsigned int l_f;
  signed int l_g;
  signed int l_h;

  l_d = 24;
  l_e = 6738;
  l_f = 165;

  int m = j.e;
  l_d = m;

  int n = j.h && l_d;

  int o = l_d;

  int p = o | -(l_f && l_d) - n;

  i.g = p;
}