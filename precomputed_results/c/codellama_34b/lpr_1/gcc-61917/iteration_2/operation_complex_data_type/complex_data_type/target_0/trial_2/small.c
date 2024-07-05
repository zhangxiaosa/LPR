
int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int k;
int l;
int o;
int result;

int fn3(p1_int) {
  for (k = 0; k >= -27; k = k - 6) {
    for (l = 0; l < 5; l++) {
      o = fn2(k, l);
      result = fn2(o, p1_int);
    }
  }
  return result;
}

int main() {}
