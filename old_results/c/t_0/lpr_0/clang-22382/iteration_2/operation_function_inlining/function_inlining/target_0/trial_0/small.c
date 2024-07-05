typedef long c;
typedef unsigned e;
struct h {
  int i;
  c j;
  int k;
};
e fn2() {
  struct h p;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
