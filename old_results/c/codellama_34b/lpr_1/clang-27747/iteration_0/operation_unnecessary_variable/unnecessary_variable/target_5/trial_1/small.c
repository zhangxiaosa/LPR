
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
int main() {
  struct c l = {24, 6738, 165};
  int m = 0;
  l.d = m;
  int n = 0;
  int p = l.d | -(l.d && l.d) - n;
  int q = p;
}
