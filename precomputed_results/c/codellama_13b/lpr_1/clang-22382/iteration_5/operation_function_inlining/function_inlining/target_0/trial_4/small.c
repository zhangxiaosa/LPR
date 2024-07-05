
struct h {
  int i;
  long j;
  int k;
};

static struct h fn2() {
  struct h p;
  struct h r;
  while (1)
    p = r = p;
}

int main() {
  struct h p4;
  while (1)
    p4 = p4;
  return 0;
}
