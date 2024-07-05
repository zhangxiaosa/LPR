
struct h {
  int i;
  long j;
  char k;
};

static struct h fn1(int p1, int p2, int p3, struct h param) {
  while (1) {
    param = param;
  }
}

int fn2(int p1) {
  struct h param;
  while (1) {
    param = param;
  }
}

int main() {
  return 0;
}
