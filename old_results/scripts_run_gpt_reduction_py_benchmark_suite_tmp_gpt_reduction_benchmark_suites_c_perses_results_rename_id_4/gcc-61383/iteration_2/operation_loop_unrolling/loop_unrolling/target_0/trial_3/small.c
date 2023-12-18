int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
signed o;
int main() {
  for (; n < 9; n = fn3(fn3(fn3(fn3(n, 3), 3), 3), 3)) {
    int ab1 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (ab1)
      break;

    int ab2 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (ab2)
      break;

    int ab3 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (ab3)
      break;

    int ab4 = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (ab4)
      break;
  }

  for (; n < 12; n = fn3(n, 3)) {
    int ab = o == 0 ? o : o % o;
    if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }

  return 0;
}