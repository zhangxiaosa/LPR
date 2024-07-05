
struct c {
  int d : 18;
  int e;
  unsigned f;
  int g;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int m = j.e;
  int n = j.h && m;
  int o = m;
  int p = o | -(j.f && m) - n;
  i.g = p;
}

int main() {}
