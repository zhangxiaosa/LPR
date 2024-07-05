
struct c {
  signed d : 18;
  unsigned e;
  unsigned f;
  signed g;
};

struct c i;
struct c j;

int fn1() {
  int m = j.e;
  int n = j.h && m;
  signed p = m | -(j.f && m) - n;
  i.g = p;
}

int main() {}
