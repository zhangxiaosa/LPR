int g;
short fn1() {
  int j = 0x24F96B7B;
  unsigned k;
  while (1) {
    k = k >> 1;
    if (g) {
      k = k << j;
      goto q;
    }
    j -= 16;
    k = k >> 1;
    if (g) {
      k = k << j;
      goto q;
    }
    j -= 16;
    k = k >> 1;
    if (g) {
      k = k << j;
      goto q;
    }
    j -= 16;
    k = k >> 1;
    if (g) {
      k = k << j;
      goto q;
    }
    j -= 16;
  }
q:;
}

int main() {}