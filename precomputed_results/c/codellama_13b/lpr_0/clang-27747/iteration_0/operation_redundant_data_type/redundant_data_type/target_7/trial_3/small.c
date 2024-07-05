
struct c {
  int d : 18;
  int e;
  int f;
  int g;
};

struct c i;
struct c j;

int fn1() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  int n = j.g && l.d;
  int o = l.d;
  i.d = o | -(l.f && l.d) - n;
}

int main() {}
