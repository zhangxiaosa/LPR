c
short k;
short l;
volatile short m[5][8];
short fn3(p1) {
  for (;;) {
    k = 0;
    k = fn1(k, 6);
    p1 = k - p1;
    k = fn1(k, 6);
    p1 = k - p1;
    k = fn1(k, 6);
    p1 = k - p1;
    k = fn1(k, 6);
    p1 = k - p1;
    k = fn1(k, 6);
    p1 = k - p1;
    k = fn1(k, 6);
    p1 = k - p1;
    k = fn1(k, 6);
    p1 = k - p1;
  }
}
int main() {}
