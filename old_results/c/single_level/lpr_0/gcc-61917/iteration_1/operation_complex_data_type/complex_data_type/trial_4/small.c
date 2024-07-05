typedef int c;
typedef unsigned d;
typedef unsigned f;
f fn2(f p1, f p2) { return p1 - p2; }
c k;
unsigned l;
volatile f m00;
volatile f m01;
volatile f m02;
volatile f m03;
volatile f m04;
volatile f m05;
volatile f m06;
volatile f m07;
volatile f m10;
volatile f m11;
volatile f m12;
volatile f m13;
volatile f m14;
volatile f m15;
volatile f m16;
volatile f m17;
volatile f m20;
volatile f m21;
volatile f m22;
volatile f m23;
volatile f m24;
volatile f m25;
volatile f m26;
volatile f m27;
volatile f m30;
volatile f m31;
volatile f m32;
volatile f m33;
volatile f m34;
volatile f m35;
volatile f m36;
volatile f m37;
volatile f m40;
volatile f m41;
volatile f m42;
volatile f m43;
volatile f m44;
volatile f m45;
volatile f m46;
volatile f m47;
d fn3(f p1) {
  for (;;) {
    for (; l; l++)
      for (k = 0; k >= -108; k = k - 24)
        p1 = fn2(0x4FL, p1);
    p1 || m20;
  }
}
int main() {}