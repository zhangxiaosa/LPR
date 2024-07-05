int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
short fn2(short p1, int p2) { return p1; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
unsigned n;
int o;
static unsigned p = 0x01B28DB7L;
int main() {
  int ab1, ab2, ab3, ab4, ab5, ab6, ab7, ab8, ab9, ab10, ab11, ab12;
  
  ab1 = fn1(o, o);
  ab2 = fn1(o, o);
  ab3 = fn1(o, o);
  ab4 = fn1(o, o);
  ab5 = fn1(o, o);
  ab6 = fn1(o, o);
  ab7 = fn1(o, o);
  ab8 = fn1(o, o);
  ab9 = fn1(o, o);
  ab10 = fn1(o, o);
  ab11 = fn1(o, o);
  ab12 = fn1(o, o);

  if (0x4F92L < fn2(p | ab1, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab1 || ab2 || ab3 || ab4 || ab5 || ab6 || ab7 || ab8 || ab9 || ab10 || ab11 || ab12)
    return 0;  // Break from the loop

  if (0x4F92L < fn2(p | ab2, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab2 || ab3 || ab4 || ab5 || ab6 || ab7 || ab8 || ab9 || ab10 || ab11 || ab12)
    return 0;  // Break from the loop

  if (0x4F92L < fn2(p | ab3, 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab3 || ab4 || ab5 || ab6 || ab7 || ab8 || ab9 || ab10 || ab11 || ab12)
    return 0;  // Break from the loop

  // ... Repeat the pattern for the remaining iterations

  return 0;
}