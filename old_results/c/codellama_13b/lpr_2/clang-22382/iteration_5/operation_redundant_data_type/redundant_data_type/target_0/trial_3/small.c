
int i;
long j;
int k;

int fn1(int p) {
  while (1)
    p;
}
unsigned fn2() {
  int p;
  fn1(p);
  while (1) {
    int r;
    p = r = p;
  }
}
int main() {}
