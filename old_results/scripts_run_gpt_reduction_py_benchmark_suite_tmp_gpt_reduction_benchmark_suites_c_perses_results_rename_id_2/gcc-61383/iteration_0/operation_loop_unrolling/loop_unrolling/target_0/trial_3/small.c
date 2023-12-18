typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef short e;
typedef unsigned f;

b fn2(b p1, int p2) { return p1; }

c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}

f m;
d n;
a o;
static f p = 0x01B28DB7L;

e fn6() {
  c ab;
  if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6))
    ;
  else {
    a ac = 0xE3L;
    if (o <= ac)
      ;
    else if (ab)
      return m;
  }

  // First unrolled iteration
  c ab_1;
  if (0x4F92L < fn2(p | (ab_1 = o == 0 ? o : o % o), 6))
    ;
  else {
    a ac_1 = 0xE3L;
    if (o <= ac_1)
      ;
    else if (ab_1)
      return m;
  }

  // Second unrolled iteration
  c ab_2;
  if (0x4F92L < fn2(p | (ab_2 = o == 0 ? o : o % o), 6))
    ;
  else {
    a ac_2 = 0xE3L;
    if (o <= ac_2)
      ;
    else if (ab_2)
      return m;
  }

  // Third unrolled iteration
  c ab_3;
  if (0x4F92L < fn2(p | (ab_3 = o == 0 ? o : o % o), 6))
    ;
  else {
    a ac_3 = 0xE3L;
    if (o <= ac_3)
      ;
    else if (ab_3)
      return m;
  }

  return m;
}

int main() {
  if (fn6())
    ;
}