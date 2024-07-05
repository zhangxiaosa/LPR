
int fn1() {
  int f;
  for (; f;)
    j = 1;
  int m = j;
  j = m;
  goto q;
}
int main() {}
