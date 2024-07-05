
int j;
int m;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = j;
  m = j && l.d;
}
