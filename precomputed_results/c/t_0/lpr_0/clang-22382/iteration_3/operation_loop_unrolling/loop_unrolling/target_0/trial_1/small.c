typedef unsigned e;
struct h {
  int i;
  long j;
  int k;
};

static struct h fn1(struct h p5) {
  p5.k;
w:
  goto w;
}

e fn2() {
  struct h p;
  fn1(p);
  
  // Unrolled loop
  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  
  // Rest of the program
}

int main() {}
