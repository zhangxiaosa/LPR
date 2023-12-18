typedef long long_type;

typedef unsigned unsigned_type;

struct h {
  int i;
  long_type j;
  unsigned_type k;
};

static struct h fn1();

unsigned_type fn2() {
  struct h p;
  for (;;) {
    struct h r1;
    p = r1 = p;
    p = r1 = p;
    p = r1 = p;
    p = r1 = p;
    p = r1 = p;
    p = r1 = p;
    p = r1 = p;
    p = r1 = p;
  }
}

struct h fn1(unsigned_type p1) {
  // Empty body
}

int main() {}
