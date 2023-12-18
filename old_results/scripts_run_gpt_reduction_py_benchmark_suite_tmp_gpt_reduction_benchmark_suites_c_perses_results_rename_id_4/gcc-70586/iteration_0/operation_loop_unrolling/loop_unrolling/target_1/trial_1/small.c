typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
a fn2(a p1, unsigned p2) { return p1; }
c fn3(c p1, c p2) { return p2 == 0 || p1 && p2 ? p1 : p1 % p2; }
e fn4(e p1, int p2) {}
f fn5(f p1, f p2) { return p1 + p2; }
f fn6(f p1, f p2) { return p1 - p2; }
a o;
a p;
b q;
static e r = 0x2A52L;
f s = 0x03F238A4L;
e t[7][1];
c u[6];
static e fn7(b);
e fn7(b p1) {
  c ac;
  ac = fn3(p1, o);
  if (s) {
    c ad;
    b ae = 0x809CL;
    f af;

    // Iteration 0: af = 0
    c ag[8][6][5] = {1L};
    if (fn2(p1, ag[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9))) {
      // Process the body of the if statement
    } else {
      // Process the body of the else statement
    }

    // Iteration 1: af = 8
    c ag_1[8][6][5] = {1L};
    if (fn2(p1, ag_1[6][5][0] + p1 || p1 && fn4(ad = fn3(p1, 0xBC2AB98CL), 9))) {
      // Process the body of the if statement
    } else {
      // Process the body of the else statement
    }

    // Continue unrolling until af = 48

  } else {
    d aj[3];
    t[2][0] = fn3(fn3(aj[1], q), 0x9CFB623FL);
  }
  return p1;
}
int main() {
  if (fn7(1))
    ;
}