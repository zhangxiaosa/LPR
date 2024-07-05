
struct c {
  int d : 18;
  unsigned int e;
  unsigned int f;
  int g;
  int h;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.h && l.d;
  int o = l.d;
  int g = o | -(l.f && l.d) - n;
  i.g = g;
}

int main() {}
