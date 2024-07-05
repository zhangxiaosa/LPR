
int j;
int i;
int m;
int main() {
  struct {
    int d;
    int e;
    int f;
  } l;
  l.d = j;
  m = j & l.d;
  i = l.d | -l.f & l.d - m;
}
