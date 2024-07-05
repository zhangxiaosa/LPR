
struct c {
  int d;
  int e;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.e;
  int n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
