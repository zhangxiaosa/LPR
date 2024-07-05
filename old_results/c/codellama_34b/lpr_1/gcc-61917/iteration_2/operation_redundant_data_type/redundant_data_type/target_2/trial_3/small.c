
int fn3(p1_int) {
  int o;
  for (k = 0; k >= -27; k = k - 6)
    for (l = 0; l < 5; l++)
      p1_int = fn2(o, p1_int);
  return p1_int;
}

int main() {
  int k;
  int l;
  int o;
  int p1_int;
  int p2_int;
  int result;

  p1_int = 0;
  p2_int = 0;

  for (k = 0; k >= -27; k = k - 6)
    for (l = 0; l < 5; l++)
      p1_int = p1_int - p2_int;

  result = p1_int;

  return result;
}
