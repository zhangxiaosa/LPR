typedef int c;
typedef unsigned d;
typedef unsigned f;
f fn2(f p1, f p2) { return p1 - p2; }
c k;
unsigned l;
volatile f m[5][8];
d fn3(f p1) {
  for (;;) {
    if (l) {
      p1 = fn2(0x4FL, p1);
      l++;
      k = k - 24;
      if (k < -108)
        break;
      p1 = fn2(0x4FL, p1);
      l++;
      k = k - 24;
      if (k < -108)
        break;
      p1 = fn2(0x4FL, p1);
      l++;
      k = k - 24;
      if (k < -108)
        break;
      p1 = fn2(0x4FL, p1);
      l++;
      k = k - 24;
      if (k < -108)
        break;
    }
    p1 || m[2][5];
  }
}
int main() {}