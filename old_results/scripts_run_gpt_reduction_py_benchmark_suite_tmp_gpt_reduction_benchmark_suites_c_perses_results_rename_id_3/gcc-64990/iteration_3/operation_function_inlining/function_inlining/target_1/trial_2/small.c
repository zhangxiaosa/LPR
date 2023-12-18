static short g = 0x7EBA;
int h = 0xCA;
short i;
int j_old[5][5];
unsigned k = 0xAF7C65D6L;
static unsigned l;
unsigned m[9][2][3];

unsigned fn1(p1) {
  if (p1 || (m[1][0][1] = 0)) {
  }
  return 2;
}

unsigned fn3() {
  if (0 || (m[1][0][1] = 0)) {
  }
  return 2;
}

int main() {
  fn1(0); // Inlined body of fn1
  if (0) {
  } else {
    if (k)
      break;
    return m[g][l + 1][l];
  }
  for (; 0;) {
  }
  return 0x709BFC8A;
}
