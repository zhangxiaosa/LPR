int fn1(int p1, int p2) {
  return p2 == 0 ? p1 : p1 % p2;
}

int fn3(int p1, int p2) {
  return p1 && p2 && p1 > 2147483647 - p2 || p1 < 0 && p2 < 0 && p1 ? p1 : p1 + p2;
}

unsigned n;
int o;
signed fn6() {
  int ab = fn1(o, o);
  if (!ab)
    return 0;
}

int main() {
  o = 0;
  fn6();
}
