
int fn2() {
  struct h p;
  struct h r;
  fn1(p);
  while (1)
    p = r = p;
}

int main() {
  // No optimizations made
}
