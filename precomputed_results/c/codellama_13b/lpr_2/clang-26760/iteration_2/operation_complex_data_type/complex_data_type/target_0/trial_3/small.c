
int fn1() {
  int j = 0x24F96B7B;
  for (int i = 0, k = 6; i < k; i++) {
    j = 1;
    j = j >> 1;
    j = j << k;
  }
  return j;
}

int main() {
  printf("%d\n", fn1());
  return 0;
}
