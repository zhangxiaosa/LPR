
int j;
int i;
int m;
int main() {
  struct {
    int d : 18;
    int f;
  } l = {24, 165};
  l.d = j;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;
  int loop_condition = 0;
  while (loop_condition) {
    if (loop_condition) {
      l.d = j;
      m = j && l.d;
      i = l.d | -(l.f && l.d) - m;
    }
    loop_condition--;
  }
}
