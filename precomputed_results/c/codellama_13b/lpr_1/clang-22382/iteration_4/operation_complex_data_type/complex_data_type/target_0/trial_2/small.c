
int i;
long j;
int k;

int fn1(int p1, int p2, int p3, int i, long j, int k) {
  while (1) {
    i = p1;
    j = p2;
    k = p3;
  }
}

int fn2(int p1) {
  int i;
  long j;
  int k;
  int r;
  fn1(0, p1, p1, i, j, k);
  while (1) {
    i = r = i;
    j = r = j;
    k = r = k;
  }
}

int main() {}
