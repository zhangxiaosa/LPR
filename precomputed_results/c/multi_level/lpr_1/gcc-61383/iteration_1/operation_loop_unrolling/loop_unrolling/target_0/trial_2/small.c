unsigned n1;
int o;
int fn1(int p1, int p2) { return p2 == 0 ? p1 : p1 % p2; }
int fn3(int p1, int p2) { return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2; }
short fn6(unsigned n1) {
  int ab;

  n1 = fn3(n1, 3); // Iteration 1
  if (0x4F92L < (ab = fn1(o, o), 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;

  n1 = fn3(n1, 3); // Iteration 2
  if (0x4F92L < (ab = fn1(o, o), 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;

  n1 = fn3(n1, 3); // Iteration 3
  if (0x4F92L < (ab = fn1(o, o), 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;

  n1 = fn3(n1, 3); // Iteration 4
  if (0x4F92L < (ab = fn1(o, o), 6))
    ;
  else if (o <= 0xE3L)
    ;
  else if (ab)
    break;

  return 0;
}
int main() { fn6(n1); }
