
int fn2(int p1_int, int p2_int) {
  return p1_int - p2_int;
}

int k;
int l;
int m[5][8];

int fn3(p1_int) {
  int o;
  for (;;) {
    for (k = 0; k >= -27; k = k - 6)
      for (l = 0; l < 5; l++)
        p1_int = fn2(o, p1_int);
    p1_int || m[2][5];
  }
}

int main() {
  // Initialize m
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = 0;
    }
  }

  // Call fn3
  fn3(m[2][5]);

  // Print the result
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
