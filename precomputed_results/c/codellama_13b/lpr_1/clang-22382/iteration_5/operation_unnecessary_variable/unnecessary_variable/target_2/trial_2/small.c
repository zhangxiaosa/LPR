
struct h {
  int i;
  long j;
  int k;
};
int fn2() {
  struct h r;
  while (1)
    r = r;
}
