
struct c i;
int main() {
  int d1 = i.d;
  int e1 = i.e;
  int g1 = i.g;
  struct c l;
  l.d = e1;
  int n = d1 && l.d;
  int p = l.d | -(l.d && l.d) - n;
  g1 = p;
}
