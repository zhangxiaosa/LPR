
struct c {
  int d : 18;
  int e;
  int g;
};
struct c i;

int main() {
  struct c l;
  int m = i.e;
  l.d = m;
  int n = l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
