
struct c {
  int d;
  int e;
};

int fn1(struct c *f) {
  int h = 6L;
  if (f->e) {
    f->d = h;
    return 0xEEACFBBFL;
  }
  return fn1(f);
}

int main() {
  struct c f;
  f.e = 1;
  fn1(&f);
  return 0;
}
