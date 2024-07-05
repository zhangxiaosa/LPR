
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};
struct c i;
int main() {
  struct c l;
  int m = i.e;
  l.d = m;
  int n = i.h && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.g = p;

  // Optimization: h is not used, so it can be optimized out
  // int h;

  // Optimization: n is not used, so it can be optimized out
  // int n = i.h && l.d;

  // Optimization: p is not used, so it can be optimized out
  // int p = l.d | -(l.d && l.d) - n;

  // Optimization: i.g is not used, so it can be optimized out
  // i.g = p;
}
