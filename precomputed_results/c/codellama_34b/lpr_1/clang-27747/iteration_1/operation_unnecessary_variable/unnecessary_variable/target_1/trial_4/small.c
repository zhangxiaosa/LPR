
struct c {
  int d : 18;
  int e;
  int g;
};
struct c i;
int main() {
  struct c l;
  int m = i.e;
  l.d = m;
  i.g = l.d | -l.d - 1;
}
