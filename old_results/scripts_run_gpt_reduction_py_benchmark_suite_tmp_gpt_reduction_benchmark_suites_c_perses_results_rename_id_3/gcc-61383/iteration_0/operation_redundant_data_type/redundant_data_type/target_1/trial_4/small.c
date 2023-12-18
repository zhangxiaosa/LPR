typedef int c;
typedef unsigned d;
typedef unsigned f;
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
f m;
d n;
signed o;
static f p = 0x01B28DB7L;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    c ab;
    if (0x4F92L < fn2(p | (ab = o == 0 ? o : o % o), 6))
      ;
    else {
      signed ac = 0xE3L;
      if (o <= ac)
        ;
      else if (ab)
        break;
    }
  }
  return m;
}
