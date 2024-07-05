
int fn1() {
  unsigned j = 0x24F96B7B;
  for (int f; f;)
    j = 1L;
  int m = j;
q:;
  j = j >> 1L;
  j = j << m;
  goto q;
}

int main() {
  int fn1();
  fn1();
}
