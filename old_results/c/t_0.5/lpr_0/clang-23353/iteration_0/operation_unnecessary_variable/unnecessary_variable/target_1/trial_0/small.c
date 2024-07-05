signed h;
int i;
int main() {
  h = 0;
  h ^= fn1(6, i) && 1;
  h ^= fn1(5, i) && 1;
  h ^= fn1(4, i) && 1;
  h ^= fn1(3, i) && 1;
  h ^= fn1(2, i) && 1;
  h ^= fn1(1, i) && 1;
  h ^= fn1(0, i) && 1;
  h ^= fn1(-1, i) && 1;
  h ^= fn1(-2, i) && 1;
  h ^= fn1(-3, i) && 1;
  h ^= fn1(-4, i) && 1;
  h ^= fn1(-5, i) && 1;
  h ^= fn1(-6, i) && 1;
  h ^= fn1(-7, i) && 1;
  return 0;
}