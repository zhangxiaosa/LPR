int j_e;
int j_h;

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l;
  l.d = 24;
  l.e = 6738;
  l.f = 165;
  int m = j_e;
  l.d = m;
  int n = j_h && l.d;
  int o = l.d;
  signed int p = o | -(l.f && l.d) - n;
  i.g = p;
}