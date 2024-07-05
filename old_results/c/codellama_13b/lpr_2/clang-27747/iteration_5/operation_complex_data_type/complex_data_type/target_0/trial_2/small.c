
int j;
int i;
int m;
int d_msb;
int d_lsb;

int main() {
  struct {
    int d_msb;
    int d_lsb;
    int f;
  } l = {24, 165};
  l.d_msb = j;
  m = j && l.d_msb;
  i = l.d_msb | -(l.f && l.d_lsb) - m;
}
