
struct h {
  long i;
  long j;
  long k;
};

int main() {
  struct h p;
  p.i = 0;
  p.j = 0;
  p.k = 0;

  while (1) {
    struct h r;
    r.i = 0;
    r.j = 0;
    r.k = 0;

    p = r = p;
  }

  return 0;
}
