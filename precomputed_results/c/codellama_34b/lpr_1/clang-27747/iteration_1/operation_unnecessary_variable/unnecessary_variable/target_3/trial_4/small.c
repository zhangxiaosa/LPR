
struct c {
  int d : 18;
  int e;
  int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.e;
  int n = i.d && l.d;
  int p = l.d | -n;
  i.g = p;
}
