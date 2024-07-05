
struct h {
  signed i;
  long j;
  unsigned k;
};

int main() {
  struct h p;
  p.k;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
