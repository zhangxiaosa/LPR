int main() {
  int j = 0x24F96B7B;
  if (j)
    --j;
q:
  if (j) {
    k = k << j;
    goto q;
  }
}