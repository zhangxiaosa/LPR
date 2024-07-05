struct h {
  signed i;
  long j;
  unsigned k;
};

unsigned l;

unsigned fn2(p1) {
  struct h p;
  int q;

  // Inlined body of fn1
  p.k;
w:
  goto w;
}

int main() {}
