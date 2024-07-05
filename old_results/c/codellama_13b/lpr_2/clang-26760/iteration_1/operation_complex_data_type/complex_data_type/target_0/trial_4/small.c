
int f, j, m;

void fn1() {
  j = 0x24F96B7BL;
  for (f = 0; f;) {
    j = 1L;
    m = j;
  }
  q:
    j = j >> 1L;
    j = j << m;
    goto q;
}

int main() {
  fn1();
}
