
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
int main() {
  struct c l = {24, 6738, 165};
  int m = 0;
  l.d = m;
  int n = m && l.d;
  int p = l.d | -(l.g && l.d) - n;
  i.g = p;
}
