
struct h {
  int i;
  long j;
  int k;
};

struct h_int {
  int i;
};

struct h_long {
  long j;
};

struct h_int_and_long {
  int i;
  long j;
};

struct h_int_and_int {
  int i;
  int k;
};

static struct h_int_and_long fn1(struct h_int_and_long p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h_int_and_long p;
  fn1(p);
  while (1) {
    struct h_int_and_long r;
    p = r = p;
  }
}

int main() {}
