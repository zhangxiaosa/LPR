
struct c {
  int e;
};
struct c i, j;
int main() {
  struct c l;
  l.e = j.e;
  int n = j.e && l.e;
  i.e = l.e | -(l.e && l.e) - n;
}
