
int fn1(int p1, int p2) {
  return p1 * p2;
}

int g(int p1, int p2) {
  int h;
  for (int p3 = 6; p3 != -7; p3--)
    h ^= fn1(p3, i) && 1L;
  return h;
}

int main() {
  int i;
  int *j;
  int *p2;
  int p3;

  i = 0;
  j = (int *)malloc(sizeof(int) * 10);
  p2 = (int *)malloc(sizeof(int) * 10);
  p3 = 6;

  for (int k = 0; k < 10; k++) {
    p2[k] = g(p3, i);
    i++;
  }

  free(j);
  free(p2);

  return 0;
}
