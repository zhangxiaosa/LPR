typedef int c;
typedef unsigned d;
typedef unsigned f;
f fn2(f p1, f p2) { return p1 - p2; }
c k;
unsigned l;
volatile f m[5][8];
d fn3(f p1) {
  for (;;) {
    for (; l; l++) {
      // Unrolled loop iteration 1
      k = 0;
      p1 = fn2(0x4FL, p1);
      if (k < -84)
        break;
      // Unrolled loop iteration 2
      k -= 24;
      p1 = fn2(0x4FL, p1);
      if (k < -84)
        break;
      // Unrolled loop iteration 3
      k -= 24;
      p1 = fn2(0x4FL, p1);
      if (k < -84)
        break;
      // Unrolled loop iteration 4
      k -= 24;
      p1 = fn2(0x4FL, p1);
      if (k < -84)
        break;
    }
    p1 || m[2][5];
  }
}