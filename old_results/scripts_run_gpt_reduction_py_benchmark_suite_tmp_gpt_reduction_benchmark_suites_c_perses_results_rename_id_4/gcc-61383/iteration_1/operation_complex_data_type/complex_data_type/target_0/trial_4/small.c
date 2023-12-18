int fn3(int p1, int p2) {
  if (p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1)
    return p1;
  else
    return p1 + p2;
}

int main() {
  unsigned m = 0;
  unsigned n = 0;
  signed o = 0;

  for (; n < 12; n = fn3(n, 3)) {
    int ab = 0;

    if (0x4F92L < (ab = o == 0 ? o : o % o, 6))
      ;
    else if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }

  return m;
}