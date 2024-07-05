
int d = 18;
int e;
int g;
int h;

struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

struct c i;
struct c j;

int main() {
  int l_d = 24;
  int l_e = 6738;
  int l_g = 165;
  int l_h = 0;

  i.d = l_d;
  i.e = l_e;
  i.g = l_g;
  i.h = l_h;

  j.d = l_d;
  j.e = l_e;
  j.g = l_g;
  j.h = l_h;

  int m = j.e;
  l_d = m;
  int n = j.h && l_d;
  int p = l_d | (-(l_g && l_d) - n);
  i.g = p;
}
