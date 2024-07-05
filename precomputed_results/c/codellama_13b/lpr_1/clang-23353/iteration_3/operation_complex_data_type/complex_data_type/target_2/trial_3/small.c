
int i_1 = i & 0xFFFF;
int i_2 = i >> 16;
short j = 0;

char fn1(char p1, char p2) {
  return p1 & p2;
}

char fn2(char p3) {
  for (p3 = 6; p3 != -7; p3--) {
    j ^= fn1(p3, i_1) && 1L;
  }
  return 0;
}

int main() {
  return 0;
}
