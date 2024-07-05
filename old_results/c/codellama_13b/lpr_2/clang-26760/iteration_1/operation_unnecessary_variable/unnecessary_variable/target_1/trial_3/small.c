
int fn1() {
  unsigned j = 0x24F96B7BL;
  for (int f = 0; f;)
    j = 1L;
q:;
  j = j >> 1L;
  j = j << j;
  goto q;
}
int main() {}
