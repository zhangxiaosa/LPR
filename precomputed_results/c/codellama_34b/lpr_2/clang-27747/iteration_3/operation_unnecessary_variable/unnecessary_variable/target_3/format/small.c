
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int m = j.d && l.d;
  int p = l.d | -(l.d && l.d) - m;
  i.d = p;
}
