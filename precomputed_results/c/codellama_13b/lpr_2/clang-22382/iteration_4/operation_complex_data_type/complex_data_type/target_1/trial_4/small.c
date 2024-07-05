
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p) {
  while (1)
    p.k;
}

unsigned fn2() {
  struct h p;
  int i;
  while (1) {
    p = i = p;
  }
}

int main() {}
