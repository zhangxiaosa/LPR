int g;

int fn1() {
  int j = 0x24F96B7B;
  int k;
  if (j)
    --j;
  int m = j;
  int n = g;
loop:
  k = k >> 1L;
  if (n) {
    k = k << m;
    goto loop;
  }
}

int main() {}
