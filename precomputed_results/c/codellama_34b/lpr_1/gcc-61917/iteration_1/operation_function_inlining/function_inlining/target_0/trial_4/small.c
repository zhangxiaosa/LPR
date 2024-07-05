
int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int main() {
  int p1_int = 0;
  int p2_int = 0;
  int result = 0;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      result = fn2(p1_int, p2_int);
      p1_int = result;
    }
  }

  return 0;
}
