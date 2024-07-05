struct h {
  int i;
  long j;
  int k;
};

unsigned fn2() {
  struct h p;
  struct h r;
  int p5_i = p.i;
w:
  goto w;
}

int main() {}
