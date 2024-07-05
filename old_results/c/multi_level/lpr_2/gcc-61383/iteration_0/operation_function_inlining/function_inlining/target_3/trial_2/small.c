#include&lt;stdio.h&gt;

typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

a fn1(a p1, a p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

b fn2(b p1, int p2) {
  return p1;
}

c fn3(c p1, c p2) {
  return p1 && p2 && p1 &gt; 2147483647 - p2 || p1 &lt; 0 && p2 &lt; 0 && p1 ? p1 : p1 + p2;
}

a l;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
c q;

e fn5(a);

e fn6() {
  b u = 0L;

  if (fn5(o))
    ;

  return l;
}

e fn5(a p1) {
  for (; n &lt; 12; n = fn3(n, 3)) {
    c ab;

    if (0x4F92L &lt; fn2(p | (ab = fn1(p1, p1)), 6))
      ;
    else {
      a ac = 0xE3L;

      if (p1 &lt;= ac)
        ;
      else if (ab)
        break;
    }
  }

  return m;
}

int main() {
  b u = 0L;

  if (fn5(o))
    ;

  return q;
}
