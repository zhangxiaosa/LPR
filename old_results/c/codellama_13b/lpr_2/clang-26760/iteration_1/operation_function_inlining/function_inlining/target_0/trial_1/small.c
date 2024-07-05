
int f;
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (f = 0; f;)
    for (; j; --j)
      ;
  int m = j;
  j = j >> 1L;
  j = j << m;
}

int main() {
  fn1();
}
