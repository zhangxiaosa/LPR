int g;
short fn1() {
  int j = 0x24F96B7B;
  unsigned k;
  for (;;) {
    k = k >> 1;
    if (g) {
      k = k << j;
    }

    k = k >> 1;
    if (g) {
      k = k << j;
    }

    k = k >> 1;
    if (g) {
      k = k << j;
    }

    k = k >> 1;
    if (g) {
      k = k << j;
    }
  }
}

int main() {}
