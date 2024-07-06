struct c {
  int d : 18;
} i;
signed main() {
  struct c l;
  l.d = i.d;
  long n = i.d && i.d;
  i.d = l.d | -(i.d && l.d) - n;
}
