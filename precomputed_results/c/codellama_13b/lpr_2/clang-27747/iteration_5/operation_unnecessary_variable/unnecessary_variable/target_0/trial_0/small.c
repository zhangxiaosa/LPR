
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = j;
  m = j && l.d;
  // Optimized out by constant propagation:
  // i = l.d | -(l.f && l.d) - m;
  // i = l.d | 0 - m;
  // i = l.d | -m;
  i = l.d;
}
