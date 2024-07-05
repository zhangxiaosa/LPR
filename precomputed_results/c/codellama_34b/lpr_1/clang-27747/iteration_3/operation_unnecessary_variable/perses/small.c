struct c {
  int d : 18;
  int g;
};
struct c i;
int n;
int main() {
  struct c l;
  l.d = i.d;
  n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
