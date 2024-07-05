
int fn1(int p1, int p2) {
  return p1 - p2;
}

int k;
int l;

int fn3(int p1) {
  k = 0;
  while (k >= -27) {
    k = fn1(k, 6);
    p1 = k - p1;
  }
  return p1;
}

int main() {
  int p1;
  int p2;
  p1 = fn3(p2);
  return p1;
}
