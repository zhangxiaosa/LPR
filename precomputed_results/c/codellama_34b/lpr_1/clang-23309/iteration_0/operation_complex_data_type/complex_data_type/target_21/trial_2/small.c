
#include <time.h>

int main() {
  clock_t start = clock();
  short ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  clock_t end = clock();
  double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Elapsed time: %f seconds\n", elapsed);
  return 0;
}
