
int i;
int m;
int main() {
  struct {
    int d : 18;
    int e;
  } l = {24, 6738};
  l.d = 18;
  m = 18 && l.d;
  i = l.d | -(l.f && l.d) - m;
}
