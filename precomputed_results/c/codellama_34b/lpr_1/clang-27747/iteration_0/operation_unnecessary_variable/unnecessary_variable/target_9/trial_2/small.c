
struct c {
  int d : 18;
  int e = 6738;
  int g;
  int h = 165;
};
struct c i;
int main() {
  struct c l = {24, 6738, 165};
  int m = 6738;
  l.d = m;
  int n = 165 && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;
}
