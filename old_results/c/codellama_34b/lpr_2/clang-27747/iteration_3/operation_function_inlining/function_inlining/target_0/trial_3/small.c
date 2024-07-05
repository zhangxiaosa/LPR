
struct c {
  int d : 18;
};

int inline_main() {
  struct c l, j;
  l.d = j.d;
  int n = j.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  return p;
}

int main() {
  struct c i;
  i.d = inline_main();
  return 0;
}
