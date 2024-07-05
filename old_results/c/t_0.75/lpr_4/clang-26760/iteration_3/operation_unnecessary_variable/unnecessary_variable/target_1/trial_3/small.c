int g;
int main() {
  int j = 0x24F96B7B;
  unsigned k = 0; // Initial value assigned
  if (j)
    --j;
q:
  k = k >> 1L;
  if (g) {
    k = k << j;
    goto q;
  }
}