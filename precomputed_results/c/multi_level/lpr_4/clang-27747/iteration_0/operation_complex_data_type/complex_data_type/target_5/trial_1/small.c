typedef int b;

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
  struct c l = {24, 6738, 165};
  int j_e = j.e;
  int j_h = j.h;
  int l_d = l.d;
  int l_f = l.f;
  int n = j_h && l_d;
  int o;
  signed int p = o | -(l_f && l_d) - n;
  i.g = p;
}