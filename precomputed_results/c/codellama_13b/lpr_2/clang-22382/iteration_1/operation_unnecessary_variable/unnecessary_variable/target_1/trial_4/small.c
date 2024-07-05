
struct h {
  int k;
};

unsigned fn2(p1) {
  struct h p;
  p.k;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
