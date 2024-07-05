
int i;
char j;
char *fn2(int p1, char *p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    j ^= fn1(p3, i) && 1L;
  return p2;
}
char fn1(char p1, char p2) {
  return p1 * p2;
}

int main() {
  char *array = (char*)malloc(10);
  for (int i = 0; i < 10; i++) {
    array[i] = i + 1;
  }
  char *result = fn2(10, array, 0);
  printf("%s\n", result);
  return 0;
}
