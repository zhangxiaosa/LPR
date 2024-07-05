
int j;
int i;
int m;
int main() {
  struct {
    int d : 18;
    int e;
    int f;
  } l = {24, 6738, 165};
  // Decompose variables with primary data types
  int d = l.d;
  int e = l.e;
  int f = l.f;

  // Optimize m
  m = j && d;

  // Recombine variables with primary data types
  l.d = d;
  l.e = e;
  l.f = f;

  i = d | -(f && d) - m;
}
