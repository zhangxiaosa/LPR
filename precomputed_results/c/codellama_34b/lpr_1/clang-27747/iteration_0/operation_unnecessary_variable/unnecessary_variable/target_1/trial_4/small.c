
struct c {
  int d : 18;
  int f;
  int g;
  int h;
};
struct c i;
int main() {
  struct c l = {24, 165};
  int m = 6738;
  l.d = m;
  int n = 6738 && l.d;
  int p = 6738 | -(l.f && l.d) - n;
  i.g = p;
}
