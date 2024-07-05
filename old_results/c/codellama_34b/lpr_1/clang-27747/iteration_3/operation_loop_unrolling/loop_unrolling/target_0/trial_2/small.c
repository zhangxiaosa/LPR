
struct c {
  int d : 18;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.d;
  int n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
  for (int i = 1; i < 10; i++) {
    l.d = i.d;
    n = i.d && l.d;
    p = l.d | -(l.d && l.d) - n;
    i.g = p;
  }
}
