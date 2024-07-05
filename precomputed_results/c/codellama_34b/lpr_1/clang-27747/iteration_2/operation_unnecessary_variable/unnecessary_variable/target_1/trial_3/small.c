
struct c {
  int d : 18;
};
struct c i;
int main() {
  struct c l;
  l.d = i.d;
  int p = l.d;
  i.g = p;
}
