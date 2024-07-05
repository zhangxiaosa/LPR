c
int fn1() {
  int j = 0x24F96B7B;
  int m = j;
  while (true) {
    j = 1;
    j = j >> 1;
    j = j << m;
  }
}

int main() {}
