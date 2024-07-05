int fn2(int p1, int p2) { return p1 - p2; }

int i;

int fn3() {
  int l;

  if (i)
    printf("l_1179=%lld\n", (long long)l);

  int temp = 1 ^ 4294967287;
  int temp2 = 0xE576516E;

  if (i)
    printf("l_1179=%lld\n", (long long)l);

  return fn2(temp, temp2);
}

int main() {
  if (fn3())
    ;
}