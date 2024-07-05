
int j;
int i;
int m;
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  int d = l.d;
  int e = l.e;
  int f = l.f;
  m = j && d;
  i = d | -(f && d) - m;
}
