
int fn1(int p5) {
  p5;
  for (;;)
    ;
}

unsigned fn2() {
  int p;
  fn1(p);
  for (;;) {
    int r;
    p = r = p;
  }
}

int main() {}
