
int g;
int main() {
  int i = g;
  i = i << (sizeof(int) * 8 - 1);
  while (i) {
    i = i >> 1;
  }
}
