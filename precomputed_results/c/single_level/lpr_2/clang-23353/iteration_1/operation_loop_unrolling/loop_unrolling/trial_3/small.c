char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed j_h;

int main() {
  char p3;
  unsigned temp;
  
  temp = fn1(6, i) && 1L;
  j_h ^= temp;

  temp = fn1(5, i) && 1L;
  j_h ^= temp;

  temp = fn1(4, i) && 1L;
  j_h ^= temp;

  temp = fn1(3, i) && 1L;
  j_h ^= temp;

  temp = fn1(2, i) && 1L;
  j_h ^= temp;

  temp = fn1(1, i) && 1L;
  j_h ^= temp;

  temp = fn1(0, i) && 1L;
  j_h ^= temp;

  temp = fn1(-1, i) && 1L;
  j_h ^= temp;

  temp = fn1(-2, i) && 1L;
  j_h ^= temp;

  temp = fn1(-3, i) && 1L;
  j_h ^= temp;

  temp = fn1(-4, i) && 1L;
  j_h ^= temp;

  temp = fn1(-5, i) && 1L;
  j_h ^= temp;

  temp = fn1(-6, i) && 1L;
  j_h ^= temp;

  return 0;
}
