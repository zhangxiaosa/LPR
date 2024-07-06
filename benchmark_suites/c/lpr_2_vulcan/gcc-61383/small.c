int fn3(p1, p2) {
  return p1 && p2 && p2 > 2147483647 - p1 || p1 < 0 && p2 < 0 && p1 ? p1
                                                                    : p1 + p2;
}
char n;
int o;
short fn6() {
  for (; n < 12; n = fn3(n, 3)) {
    int temp1 = o == 0 ? 0 : o % o;
    if (o <= 0xE3L)
      ;
    else if (temp1)
      break;
  }
  return 0;
}
int main() { fn6(); }
