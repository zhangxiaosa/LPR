
int j;
int i;
int m;
int main() {
  struct {
    int d1 : 18;
    int d2;
    int d3;
  } l = {24, 6738, 165};
  l.d1 = j;
  m = j && l.d1;
  i = l.d1 | -(l.f && l.d1) - m;
}
