
struct c {
  int d : 18;
};
struct c i;
int main() {
  struct c l;
  l.d = i.d;
  int n = i.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
}
