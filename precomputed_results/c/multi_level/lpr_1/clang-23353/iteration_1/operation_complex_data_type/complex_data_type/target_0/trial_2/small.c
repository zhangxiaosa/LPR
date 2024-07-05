char fn1(char p1, char p2) {
  return (char)(p1 * p2);
}

int i_value = 0;

int j_h_value = 0;

int *fn2(unsigned p1, int *p2, unsigned p3) {
  for (p3 = 6; p3 != -7; p3--)
    j_h_value ^= (char)(p3 * i_value) && 1L;
  return p2;
}

int main() {
  return 0;
}