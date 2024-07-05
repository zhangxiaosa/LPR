
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  int j;
  int i;
  int m;
  j = l.d;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;
}
