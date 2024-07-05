
struct h {
  int i;
  long j;
  int k;
};

int i;
long j;
int k;

int fn2(int p1) {
  i = 0;
  j = 0;
  k = 0;
  struct h p;
  fn1(0, p1, p1, p);
  while (1)
    p = i = j = k = p;
}

int fn1(int p1, int p2, int p3, struct h p4) {
  while (1)
    p4 = p4;
}

int main() {
  int p1;
  int i;
  long j;
  int k;
  fn2(p1);
}
