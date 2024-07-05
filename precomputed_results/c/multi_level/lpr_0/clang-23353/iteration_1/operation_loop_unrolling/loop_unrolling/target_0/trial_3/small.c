char fn1(char p1, char p2) { return p1 * p2; }

int i;
int h;
void *fn2(unsigned p1, int *p2, char p3) {
  p3 = 6;
  h ^= p3 * i && 1;
  p3 = 5;
  h ^= p3 * i && 1;
  p3 = 4;
  h ^= p3 * i && 1;
  p3 = 3;
  h ^= p3 * i && 1;
  p3 = 2;
  h ^= p3 * i && 1;
  p3 = 1;
  h ^= p3 * i && 1;
  p3 = 0;
  h ^= p3 * i && 1;
  p3 = -1;
  h ^= p3 * i && 1;
  p3 = -2;
  h ^= p3 * i && 1;
  p3 = -3;
  h ^= p3 * i && 1;
  p3 = -4;
  h ^= p3 * i && 1;
  p3 = -5;
  h ^= p3 * i && 1;
  p3 = -6;
  h ^= p3 * i && 1;
  p3 = -7;
  h ^= p3 * i && 1;
  p3 = -8;
  h ^= p3 * i && 1;
  p3 = -9;
  h ^= p3 * i && 1;

  return p2;
}

int main() {
  return 0;
}