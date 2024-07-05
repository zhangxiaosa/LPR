
struct c {
  int d : 18;
  int e;
  int f;
  int h;
};

struct c i;
struct c j;

int fn1() {
  int m = j.e;
  int n = j.h && m;
  int o = m;
  int k = j.f;
  i.d = o | -(k && m) - n;
}

int main() {}
