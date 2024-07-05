struct h {
  int k;
};

unsigned fn2() {
  struct h p;
  fn1_k(p);
  
  struct h r;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
  p = r = p;
}

int fn1_k(struct h p5) {
w:;
  goto w;
}