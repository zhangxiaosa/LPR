
int j;
int i;
int m;
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  int d = j;
  int d_and_m = j && l.d;
  int d_or_f_and_d = l.d | -(l.f && l.d);
  m = d_or_f_and_d - d_and_m;
}
