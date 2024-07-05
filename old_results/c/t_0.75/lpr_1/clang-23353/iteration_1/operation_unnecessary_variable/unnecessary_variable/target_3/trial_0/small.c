char fn1(char p1, char p2) { return p1 * p2; }

int i;
signed j_h;

int *fn2(int *p2) {
  signed temp = j_h;
  temp ^= 6 * i && 1L;
  j_h = temp;
  
  return p2;
}

int main() {
  return 0;
}