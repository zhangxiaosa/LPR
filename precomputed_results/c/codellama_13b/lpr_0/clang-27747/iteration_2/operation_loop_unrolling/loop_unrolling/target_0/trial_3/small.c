
struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = 24;
  l.e = 6738;
  l.h = 165;
  i.d = l.d | -(l.h && l.d) - (j.h && l.d);
}
