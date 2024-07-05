
struct h {
  int k;
};

static struct h fn1(void) {
  w:;
  goto w;
}

unsigned fn2() {
  while (1) {
    struct h r;
    p = r = p;
  }
}

int main() {}
