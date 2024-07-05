
struct c {
  int d : 18;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int n = j.h && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.d = p;
}
