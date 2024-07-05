char fn1(char p2) { return p2; }

int i;
signed j_h;
int *fn2(int *p2) {
  char p3 = 6;
  signed temp = j_h;
  temp ^= fn1(p3, i) && 1L;
  j_h = temp;
  return p2;
}

int main() { return 0; }.