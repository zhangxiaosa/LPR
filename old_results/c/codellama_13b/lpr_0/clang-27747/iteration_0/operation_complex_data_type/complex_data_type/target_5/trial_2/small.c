
struct c {
  int d;
  int e;
  int f;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int d = 24;
  int e = 6738;
  int f = 165;
  int h = j.h;

  int m = j.e;
  d = m;

  int n = j.h && d;

  int o = d;

  int k = f;

  i.d = o | -(k && d) - n;
}

int main() {}
