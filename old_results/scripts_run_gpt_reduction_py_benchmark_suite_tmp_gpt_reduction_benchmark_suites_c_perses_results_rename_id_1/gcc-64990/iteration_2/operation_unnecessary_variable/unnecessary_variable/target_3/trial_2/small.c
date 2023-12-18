static short g_new = 0x7EBA;
int h = 0xCA;
short i;
int j[5][5];
int m[9][2][3];
int n;

int fn2(int p1) {
  if (0)
    return v[g_new][0][0];
  else
    return j[g_new][g_new];
}

int fn3() {
  if (fn2(0))
    m[1][0][1] = 0;
  return n;
}

int main() {
  fn3();
}