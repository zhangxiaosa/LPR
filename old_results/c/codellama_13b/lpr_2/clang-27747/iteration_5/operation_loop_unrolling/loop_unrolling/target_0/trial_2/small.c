
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
  j = j + 1;
  l.d = j;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;
  j = j + 1;
  l.d = j;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;
  j = j + 1;
  l.d = j;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;
  j = j + 1;
  l.d = j;
  m = j && l.d;
  i = l.d | -(l.f && l.d) - m;
}
