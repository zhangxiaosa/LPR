
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }

int k;

int fn3(p1_int) {
  int o;
  for (k = 0; k >= -27; k = k - 6)
    for (o = p1_int; o < 5; o++)
      p1_int = fn2(o, p1_int);
  return p1_int;
}

int main() {}
