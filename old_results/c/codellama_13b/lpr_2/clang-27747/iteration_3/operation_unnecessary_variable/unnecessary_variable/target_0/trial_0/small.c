
int i;
int m;
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  m = l.d && l.d;
  i = l.d | -(l.f && l.d) - m;
}
