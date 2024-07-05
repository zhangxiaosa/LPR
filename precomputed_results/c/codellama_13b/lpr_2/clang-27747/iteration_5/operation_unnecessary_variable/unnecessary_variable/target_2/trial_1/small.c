
int i;
int m;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = 0;
  m = l.d && l.d;
  i = l.d | -(l.f && l.d) - m;
}
