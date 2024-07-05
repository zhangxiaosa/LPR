
struct h {
  int i;
  long j;
  int k;
};

int i = p5.i;
long j = p5.j;
int k = p5.k;

static struct h fn1(struct h p5) {
  p5.j;
  for (;;)
    ;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
