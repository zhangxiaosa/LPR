
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int n = l.d;
  int p = l.d | -n;
  i.d = p;
}
