
int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int fn3(p1_int) {
  int o;
  for (int k = 0; k >= -27; k = k - 6)
    for (int l = 0; l < 5; l++)
      o = fn2(p1_int, o);
  return o;
}

int main() {}
