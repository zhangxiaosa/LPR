cpp
int j;
int i;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = j;
  i = l.d | -(l.f && l.d);
}
