
struct c {
  int d : 18;
  int g;
};
struct c l;
int main() {
  l = {24, 6738, 165};
  int m = l.d;
  l.d = m;
  int n = l.g && l.d;
  int p = l.d | -(l.d && l.d) - n;
  l.g = p;
}
