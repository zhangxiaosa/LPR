signed fn1(signed p1, signed p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                : p1 + p2;
}
unsigned m;
unsigned n;
signed o;
int main() {
  unsigned ab1 = fn1(o, o);
  unsigned ab2 = fn1(o, o);
  unsigned ab3 = fn1(o, o);
  unsigned ab4 = fn1(o, o);
  if (o <= 0xE3L)
    ;
  else if (ab1 || ab2 || ab3 || ab4)
    return m;
  n = fn3(n, 3);
  if (o <= 0xE3L)
    ;
  else if (ab1 || ab2 || ab3 || ab4)
    return m;
  n = fn3(n, 3);
  if (o <= 0xE3L)
    ;
  else if (ab1 || ab2 || ab3 || ab4)
    return m;
  n = fn3(n, 3);
  if (o <= 0xE3L)
    ;
  else if (ab1 || ab2 || ab3 || ab4)
    return m;
  n = fn3(n, 3);
  return m;
}