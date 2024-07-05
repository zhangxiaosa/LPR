int g;
int main() {
  int j = 0x24F96B7B;
  unsigned k = 0x24F96B7B;

  for (int i = 0; i < 4; i++) {
    k = k >> 1L;
    k = k << j;
    g--;
  }
}