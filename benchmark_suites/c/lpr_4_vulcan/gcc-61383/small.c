int fn3(p1, p2) {
  return p1 && p2 && p2 > 2147483647 - p1 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
char n;
signed o;
int main() {
  for (; n < 12; n = fn3(n, 3)) {
    int ab = o == 0 ? o : n % n;
    if (o <= 0xE3L)
      ;
    else if (ab)
      break;
  }
  return 0;
}
