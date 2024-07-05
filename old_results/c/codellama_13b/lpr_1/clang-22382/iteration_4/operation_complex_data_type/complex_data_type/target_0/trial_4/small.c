
int i;
long j;
int k;

int fn1(int p1, int p2, int p3, int i, long j, int k) {
  while (1) {
    i = i;
    j = j;
    k = k;
  }
}

int fn2(int p1, int i, long j, int k) {
  while (1) {
    fn1(0, p1, p1, i, j, k);
    i = i;
    j = j;
    k = k;
  }
}

int main() {
  // ...
}
