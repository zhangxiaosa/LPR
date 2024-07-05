typedef signed a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned f;
f m;
d n;
a o;
static f p = 0x01B28DB7L;
a fn1(a p1, a p2) { return p2 == 0 ? p1 : p1 % p2; }
b fn2(b p1, int p2) { return p1; }
c fn3(c p1, c p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
short fn5(p1) {
  c ab;
  if (0x4F92L < fn2(p | (ab = fn1(p1, p1)), 6))
    ;
  else {
    a ac = 0xE3L;
    if (p1 <= ac)
      ;
    else if (ab)
      ;
    else if (n < 12) {
      n = fn3(n, 3);
      ab = fn1(p1, p1);
      if (0x4F92L < fn2(p | ab, 6))
        ;
      else {
        ac = 0xE3L;
        if (p1 <= ac)
          ;
        else if (ab)
          ;
        else if (n < 12) {
          n = fn3(n, 3);
          ab = fn1(p1, p1);
          if (0x4F92L < fn2(p | ab, 6))
            ;
          else {
            ac = 0xE3L;
            if (p1 <= ac)
              ;
            else if (ab)
              ;
            else if (n < 12) {
              n = fn3(n, 3);
              ab = fn1(p1, p1);
              if (0x4F92L < fn2(p | ab, 6))
                ;
              else {
                ac = 0xE3L;
                if (p1 <= ac)
                  ;
                else if (ab)
                  ;
                else if (n < 12) {
                  n = fn3(n, 3);
                  ab = fn1(p1, p1);
                  if (0x4F92L < fn2(p | ab, 6))
                    ;
                  else {
                    ac = 0xE3L;
                    if (p1 <= ac)
                      ;
                    else if (ab)
                      ;
                    else if (n < 12) {
                      n = fn3(n, 3);
                      ab = fn1(p1, p1);
                      if (0x4F92L < fn2(p | ab, 6))
                        ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return m;
}

int main() {
  if (fn5(o))
    ;
}