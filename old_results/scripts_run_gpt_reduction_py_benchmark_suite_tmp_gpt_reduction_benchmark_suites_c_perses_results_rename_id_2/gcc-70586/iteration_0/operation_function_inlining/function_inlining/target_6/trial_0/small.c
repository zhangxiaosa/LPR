typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;

a fn2(a p1, unsigned p2) { return p1; }

c fn3(c p1, c p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }

f fn5(f p1, f p2) { return p1 + p2; }

f fn6(f p1, f p2) { return p1 - p2; }

a o;
a p;
b q;
static e r = 0x2A52L;
f s = 0x03F238A4L;
e t[7][1];
c u[6];

static c fn8() {
  if (((fn3(1, o)) != 0))
    ;
}

int main() { fn8(); }