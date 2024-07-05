int g;

short fn1() {
  int j = 0x24F96B7B;
  while (1) {
    for (;; j -= 16) {
      if (g) {
        goto q;
      }
    }
  q:;
  }
}

int main() {}
