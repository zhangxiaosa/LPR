c
struct h {
  long i;
  long j;
  long k;
};

int fn2(int p1) {
  struct h p;
  struct h r;
  p = fn1(0, p1, p1, p);
  while (1)
    p = r = p;
}

int main() {}
