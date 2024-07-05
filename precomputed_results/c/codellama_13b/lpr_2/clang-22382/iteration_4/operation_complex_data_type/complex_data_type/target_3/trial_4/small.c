
int i;
long j;
int k;

static int fn1(int p) {
  while (1)
    k;
}

unsigned fn2() {
  int p;
  fn1(p);
  while (1) {
    int r;
    p = r = p;
  }
}

int main() {
  int *p = &i;
  fn1(*p);
  while (1) {
    int *r = &r;
    *p = *r = *p;
  }
}
