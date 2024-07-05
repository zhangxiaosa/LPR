
struct h {
  int i;
  long j;
  int k;
};

static void fn1() {
  // function does nothing
}

unsigned fn2(p1) {
  struct h r;
  r = p1;
  return r;
}

int main() {}
