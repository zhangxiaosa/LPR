
struct c {
  int d : 18;
};
int main() {
  struct c l;
  l.d = 0;
  int n = 0 && l.d;
  l.d = l.d | -(l.d && l.d) - n;
}
