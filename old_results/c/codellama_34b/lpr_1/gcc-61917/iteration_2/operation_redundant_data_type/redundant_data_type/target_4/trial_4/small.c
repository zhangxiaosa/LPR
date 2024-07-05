
int fn2(int p1_int, int p2_int) { return p1_int - p2_int; }

int k;

int fn3(p1_int) {
  for (k = 0; k >= -27; k = k - 6)
    p1_int = fn2(k, p1_int);
  return p1_int;
}

int main() {}
