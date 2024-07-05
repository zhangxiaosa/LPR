
static struct h fn1(struct h p4) {
  while (1)
    p4 = p4;
}

int fn2() {
  struct h p;
  fn1(p);
  while (1)
    p = p;
}

int main() {}
