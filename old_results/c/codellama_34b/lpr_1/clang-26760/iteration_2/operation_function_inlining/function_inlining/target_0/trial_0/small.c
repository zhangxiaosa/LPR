
int main() {
  int i, j, k;
  j = 0x24F96B7BL;
  k = 0;
  while (j) {
    k = k << j;
    j = j >> 1;
  }
  return k;
}
