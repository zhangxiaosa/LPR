
struct c {
  int d : 18;
  int e;
  int f;
  int h;
};

struct c i;
struct c l = {24, 6738, 165};

int fn1() {
  int m = l.e;
  l.d = m;
  int n = l.h && l.d;
  int o = l.d;
  i.d = o | -(l.f && l.d) - n;
}

int main() {}
