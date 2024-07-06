int fn3(p1, p2) { return p2 == 0 || p1 && p2 ? p2 : p1 % p2; }
char s;
static int fn7(short p1) {
  int ac = fn3(p1, p1);
  if (ac)
    for (ac = 0; ac <= 48; ac = ac + 8) {
      if (fn3(ac, s))
        ;
      else
        s = p1;
      if (!s)
        break;
      p1 = fn3(fn3(s, p1), p1) - p1;
    }
  else {
    unsigned aj[3];
    s = fn3(aj[1], p1);
  }
}
int main() { fn7(1); }
