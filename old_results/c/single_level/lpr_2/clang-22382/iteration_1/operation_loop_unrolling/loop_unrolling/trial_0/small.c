struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

static struct h fn1(unsigned, short, unsigned, unsigned, struct h);

unsigned fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  {
    struct h r;
    p = r = p;
  
    struct h r1;
    p = r1 = p;
  
    struct h r2;
    p = r2 = p;
  
    struct h r3;
    p = r3 = p;
  
    struct h r4;
    p = r4 = p;
  
    struct h r5;
    p = r5 = p;
  
    // Repeat the body as needed
  }
}

struct h fn1(unsigned p1, short p2, unsigned p3, unsigned p4, struct h p5) {
  p5.k;
  
w:
  ;
  
  // Repeat the body as needed
}

int main() {}
