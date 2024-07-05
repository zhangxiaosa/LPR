c
struct h {
  long i;
  long j;
  long k;
};

int fn2(int p1) {
  struct h p;
  struct h r;
  p.i = p1;
  p.j = p1;
  p.k = p1;
  while (1) {
    p = r = p;
  }
}

int main() {}
