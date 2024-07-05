short fn1() {
  int j = 0x24F96B7BL;
  if (j)
    --j;
  int m = j;
q:
  if (g) {
    k = k << m;
    goto q;
  }
}

int main() {}
