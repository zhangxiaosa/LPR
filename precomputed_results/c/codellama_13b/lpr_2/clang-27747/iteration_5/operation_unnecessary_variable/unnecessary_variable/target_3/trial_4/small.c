
int i;
int m;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = 0;
  m = 0;
  i = l.d;
}
