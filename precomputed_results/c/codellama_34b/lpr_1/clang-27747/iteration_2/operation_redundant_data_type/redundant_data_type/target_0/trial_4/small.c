
struct c {
  unsigned int d : 18;
  unsigned int e;
  unsigned int g;
};
struct c i;
int main() {
  struct c l;
  l.d = i.e;
  unsigned int n = i.d && l.d;
  unsigned int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
