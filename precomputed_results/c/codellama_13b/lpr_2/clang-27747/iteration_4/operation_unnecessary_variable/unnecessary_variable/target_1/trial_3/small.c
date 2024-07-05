
int j;
int i;
int m;
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  j = l.d;
  m = j && l.d;
  i = j | -l.f;
}
