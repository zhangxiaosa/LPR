typedef signed a;

typedef int c;

typedef unsigned d;

typedef short e;

typedef unsigned f;

a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }

c fn3(c p1, c p2) {

  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1

                                                                : p1 + p2;

}

f m;

d n;

a o;

e fn6() {

  // Unrolled loop iteration 1
  c ab1 = fn1(o, o);
  a ac1 = 0xE3L;
  if (o <= ac1)
    ;
  else if (ab1)
    break;

  // Unrolled loop iteration 2
  n = fn3(n, 3);
  c ab2 = fn1(o, o);
  a ac2 = 0xE3L;
  if (o <= ac2)
    ;
  else if (ab2)
    break;

  // Unrolled loop iteration 3
  n = fn3(n, 3);
  c ab3 = fn1(o, o);
  a ac3 = 0xE3L;
  if (o <= ac3)
    ;
  else if (ab3)
    break;

  // Unrolled loop iteration 4
  n = fn3(n, 3);
  c ab4 = fn1(o, o);
  a ac4 = 0xE3L;
  if (o <= ac4)
    ;
  else if (ab4)
    break;

  return m;

}

int main() {

  fn6();

}