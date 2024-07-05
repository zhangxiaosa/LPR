
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  l.d = 0;
  m = 0 && l.d;
  i = 0 | -(l.f && l.d) - m;
}
