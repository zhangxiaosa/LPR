int g;

int main() {
  int i;
  int j = 0x24F96B7B;

  // Unrolled loop
  while (j >= 4) {
    j -= 4;
    j -= 4;
    j -= 4;
    j -= 4;
  }

  // Handle remaining iterations
  while (j > 0) {
    j--;
  }

  unsigned p = g;

  while (i) {
    j = 0x24F96B7B;
    while (j >= 4) {
      j -= 4;
      j -= 4;
      j -= 4;
      j -= 4;
    }
    while (j > 0) {
      j--;
    }
    i = p;
  }
}