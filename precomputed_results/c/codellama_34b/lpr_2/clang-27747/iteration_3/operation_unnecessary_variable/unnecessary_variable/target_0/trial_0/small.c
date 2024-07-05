
struct c {
  int d : 18;
};
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int n = j.d && l.d;
  int p = l.d | -(l.d && l.d) - n;
}
