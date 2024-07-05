
int main() {
  struct c l;
  l.d = 0;
  int n = l.d && l.d;
  l.d = l.d | -(l.d && l.d) - n;
}
