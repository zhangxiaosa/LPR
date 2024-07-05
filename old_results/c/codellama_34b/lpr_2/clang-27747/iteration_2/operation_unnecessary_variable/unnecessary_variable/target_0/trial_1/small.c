
struct c {
  int e;
  int h;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.e = j.e;
  int n = j.h && l.e;
  int p = l.e | -(l.e && l.e) - n;
  i.e = p;
}
