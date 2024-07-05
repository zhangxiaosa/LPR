
struct c {
  int d : 18;
};
struct c i;
int main() {
  struct c l;
  l.d = i.d;
  int n = i.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
  for (int i = 0; i < 2; i++) {
    l.d = i.d;
    n = i.d && l.d;
    i.d = l.d | -(l.d && l.d) - n;
  }
}
