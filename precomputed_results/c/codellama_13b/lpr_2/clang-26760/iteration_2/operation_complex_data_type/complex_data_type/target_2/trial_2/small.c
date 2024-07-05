
int fn1() {
  int j = 0x24F96B7B;
  int f;
  for (f; f;)
    j = 1;
  int m = j;
  q:;
  int msb = j >> 1;
  int lsb = j << m;
  j = msb | lsb;
  goto q;
}
int main() {}
