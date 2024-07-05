
struct c {
  int d : 18;
};
struct c i;
struct c j;
int main() {
  struct c l;
  l.d = j.d;
  int p = l.d;
  i.d = p;
}
