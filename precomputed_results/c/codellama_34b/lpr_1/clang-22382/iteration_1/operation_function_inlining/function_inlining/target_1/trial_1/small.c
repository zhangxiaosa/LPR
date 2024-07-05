
struct h {
  signed i;
  long j;
  unsigned k;
};

long fn2() {
  struct h p;
  p.k;
w:;
  goto w;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
