void fn1(unsigned p1) { printf("checksum = %X\n", p1); }

int main() {
  int i, j, k;
  fn9();
  for (i = 0; i < 7; i++)
    for (j = 0; j < 5; j++)
      for (k = 0; k < 7; k++) {
        fn6(ad[i][j][k]);
      }
  fn1(s);
  return 0;
}