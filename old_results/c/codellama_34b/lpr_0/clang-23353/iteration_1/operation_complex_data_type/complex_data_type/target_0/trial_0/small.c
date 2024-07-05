
<SYS>

int fn1(int p1, int p2) {
  return p1 * p2;
}

int g_h;
int i;
int fn2(unsigned p1, int* p2, char p3) {
  for (p3 = 6; p3 != -7; p3--)
    g_h ^= fn1(p3, i);
  return p2;
}

int main() {
  return 0;
}

</SYS>
