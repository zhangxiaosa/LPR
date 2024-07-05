
int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int fn3(p1_int) {
  int k;
  int l;
  for (l = 0; l < 5; l++)
    p1_int = fn2(p1_int, p1_int);
  return p1_int;
}

int main() {}
