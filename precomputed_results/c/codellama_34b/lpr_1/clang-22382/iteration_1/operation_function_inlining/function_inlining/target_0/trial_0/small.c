
struct h {
  signed i;
  long j;
  unsigned k;
};

long fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}

int main() {}
