typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned f;
b fn2(b p1, int p2) { return p1; }
c fn3(c p1, c p2) { return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }
f m;
d n;
a o;
static f p = 0x01B28DB7L;
int main() {
  c ab1;
  if (0x4F92L < fn2(p | (ab1 = o == 0 ? o : o % o), 6))
    ;
  else {
    a ac1 = 0xE3L;
    if (o <= ac1)
      ;
    else if (ab1) break;
  }
  c ab2;
  if (0x4F92L < fn2(p | (ab2 = o == 0 ? o : o % o), 6))
    ;
  else {
    a ac2 = 0xE3L;
    if (o <= ac2)
      ;
    else if (ab2) break;
  }
  // Continue until the desired unrolling factor is achieved.
  n += 3;
  return m;
}