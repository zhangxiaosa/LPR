
int fn2(int base, int value) { return base - value; }
int k;
int l;
volatile int values[5][8];
int fn3(int values) {
  int base;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      base = fn2(base, values[i][j]);
    }
  }
  return base;
}
int main() {}
