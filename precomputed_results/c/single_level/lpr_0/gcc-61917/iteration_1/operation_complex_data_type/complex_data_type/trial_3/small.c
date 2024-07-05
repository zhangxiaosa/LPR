typedef int c;
typedef unsigned d;
typedef unsigned f;
f fn2(f p1, f p2) { return p1 - p2; }
c k;
unsigned l;
volatile f m0;
volatile f m1;
volatile f m2;
volatile f m3;
volatile f m4;
volatile f mi0;
volatile f mi1;
volatile f mi2;
volatile f mi3;
volatile f mi4;
volatile f mi5;
volatile f mi6;
volatile f mi7;
d fn3(f p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -108; k = k - 24)
        p1 = fn2(0x4FL, p1);
    p1 || m2;
  }
}
int main() {}
