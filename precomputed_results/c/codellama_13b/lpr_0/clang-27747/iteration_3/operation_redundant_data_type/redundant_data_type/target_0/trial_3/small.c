
struct c {
  short d : 18;
  short e;
};
struct c i, j;
int main() {
  struct c l;
  l.d = j.e;
  short n = j.d && l.d;
  i.d = l.d | -(l.d && l.d) - n;
}
