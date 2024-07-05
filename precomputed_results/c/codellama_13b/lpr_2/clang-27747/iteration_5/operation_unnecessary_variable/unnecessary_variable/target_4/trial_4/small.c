
int j;
int i;
int m;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = j;
  l.d = j && l.d; // Optimized out by copy propagation
  i = l.d | -(l.f && l.d) - j; // Optimized out by constant propagation
}
