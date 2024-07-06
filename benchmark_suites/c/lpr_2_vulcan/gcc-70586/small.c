char s;
int fn3(p1, p2) { return p2 == 0 || p1 && p2 ? p2 : p1 % p2; }
static unsigned fn7(short p1) {
  int optimized_ac = fn3(p1, p1);
  if (p1) {
    unsigned af = 0;
    for (; af <= 49; af = af + 8) {
      if (fn3(s, s && fn3(p1, 0xBC2AB98C))) {
      } else
        s = p1;
      if (!optimized_ac)
        break;
      p1 = fn3(fn3(p1, p1), p1) - p1;
      p1 = fn3(0x7D765DB6, p1);
    }
  } else
    fn3(0, s);
  return p1;
}
static int fn8() {
  if (fn7(1)) {
  }
}
int main() { fn8(); }
