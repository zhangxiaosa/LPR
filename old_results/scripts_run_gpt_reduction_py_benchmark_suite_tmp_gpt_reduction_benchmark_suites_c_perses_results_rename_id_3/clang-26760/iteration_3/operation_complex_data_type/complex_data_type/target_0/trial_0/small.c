unsigned g;

int main() {
  unsigned j = 0x24F96B7BL;
  unsigned k = 0;

  if (j)
    --j;

q:
  k = k >> 1L;

  if (g) {
    k = k << j;
    goto q;
  }
}