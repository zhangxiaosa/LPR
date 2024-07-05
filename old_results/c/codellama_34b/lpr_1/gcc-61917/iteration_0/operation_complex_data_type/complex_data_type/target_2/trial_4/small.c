
int main() {
  int k = 0;
  int l = 0;
  int m[5][8];
  int o = 0;
  int p1 = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 8; j++) {
      m[i][j] = 0;
    }
  }
  p1 = calculate_matrix_of_matrices(p1);
  printf("Result: %d\n", p1);
  return 0;
}
