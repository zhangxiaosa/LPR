
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  l.d = 24;
  l.e = 6738;
  l.f = 165;
}
