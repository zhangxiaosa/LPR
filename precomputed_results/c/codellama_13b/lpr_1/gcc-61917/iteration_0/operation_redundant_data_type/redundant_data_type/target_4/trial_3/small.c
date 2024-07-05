
typedef int e;

e fn1(e p1, e p2) {
  return p1 - p2;
}

e fn2(e p1, e p2) {
  return p1 - p2;
}

int k;
e l;
volatile e m[5][8];
e fn3(e p1) {
  short o = 0x4FL;
  for (;;) {
    for (l = 0; l < 20; l++)
      for (k = 0; k >= -27; k = fn1(k, 6))
        p1 = fn2(o, p1);
    p1 || m[2][5];
  }
}

int main() {}
