
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }

int fn3(int p1_int) {
  int o;
  for (int k = 0; k >= -27; k = k - 6)
    for (int l = 0; l < 5; l++)
      p1_int = fn2(o, p1_int);
  return p1_int;
}

int main() {}
