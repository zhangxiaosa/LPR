
struct s {
  int i;
  long j;
  unsigned k;
};

static struct s fn1(unsigned p1, signed p2, unsigned p3, unsigned p4,
                    struct s p5) {
  // Since k is not used in this function, we can optimize it out
  return p5;
}

unsigned fn2(p1) {
  struct s p;
  signed q;
  fn1(q, 0, p1, 3, p);
  for (;;) {
    // Since p is not used in this loop, we can optimize it out
    // and replace it with a dummy variable
    struct s dummy;
    dummy = p;
  }
}

int main() {}
