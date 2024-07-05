int g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  if (j)
    --j;
  unsigned p = g;

  k = k >> 1;
  if (p) {
    k = k << j;
  }

  k = k >> 1;
  if (p) {
    k = k << j;
  }

  k = k >> 1;
  if (p) {
    k = k << j;
  }
  // Repeat the above two blocks for additional iterations

  return 0;
}