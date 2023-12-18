int fn3(int p1, int p2) {
  int expr1 = p1 && p2;
  int expr2 = p1 > 2147483647 - p2;
  int expr3 = p1 < 0 && p2 < 0;

  if (expr1 && expr2 || expr3 && p1)
    return p1;
  else
    return p1 + p2;
}

unsigned m;
unsigned n;
int o;

short fn6() {
  while (n < 12) {
    int expr4 = fn3(n, 3);
    int ab;

    if (0x4F92L < (ab = o == 0 ? o : o % o, 6))
      ;
    else {
      int ac = 0xE3L;

      if (o <= ac)
        ;
      else if (ab)
        break;
    }

    n = expr4;
  }

  return m;
}

int main() {
  fn6();
}