
int fn1() {
  unsigned int j = 0x24F96B7B;
  for (unsigned int f; f;)
    j = 1;
  unsigned int m = j;
q:;
  j = j >> 1;
  j = j << m;
  goto q;
}
int main() {}
