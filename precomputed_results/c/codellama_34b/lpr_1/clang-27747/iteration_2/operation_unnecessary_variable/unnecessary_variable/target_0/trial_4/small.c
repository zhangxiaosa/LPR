
struct c {
  int d : 18;
  int g;
};

int main() {
  struct c l;
  l.d = 0; // Optimized out
  int n = i.d && l.d; // Optimized out
  int p = l.d | -(l.d && l.d) - n; // Optimized out
  i.g = p; // Optimized out
}
