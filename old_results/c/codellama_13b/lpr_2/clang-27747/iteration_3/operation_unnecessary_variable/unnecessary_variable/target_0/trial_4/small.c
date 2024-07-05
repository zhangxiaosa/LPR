
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  int i = l.d;
  int m = l.d;
  i = l.d | -24 - m;
}
