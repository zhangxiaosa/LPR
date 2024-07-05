
struct h {
  long i;
  long j;
  long k;
};

struct h p;
struct h r;

int fn2(int p1) {
  fn1(0, p1, p1, p);
  while (1)
    p = r = p;
}

int main() {}
