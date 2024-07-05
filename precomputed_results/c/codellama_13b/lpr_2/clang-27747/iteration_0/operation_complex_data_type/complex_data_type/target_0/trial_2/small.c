
struct c {
  int d1 : 9;
  int d2 : 9;
  int d3 : 1;
  unsigned e;
  unsigned f;
  int g;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d1 = m;
  int n = j.h && l.d1;
  int o = l.d1;
  int p = o | -(l.f && l.d1) - n;
  i.g = p;
}

int main() {}
