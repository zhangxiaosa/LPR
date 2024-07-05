
int fn1() {
  int j = 0x24F96B7B;
  int f;
  for (; f;)
    j = 1;
q:;
  j = j >> 1;
  j = j << j;
  goto q;
}
int main() {}
