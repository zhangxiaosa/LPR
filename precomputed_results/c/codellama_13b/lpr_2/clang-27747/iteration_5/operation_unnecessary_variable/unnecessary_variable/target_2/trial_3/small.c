
int i;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = 24;
  i = 24 | -(165 && 24) - 24;
}
