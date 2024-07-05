unsigned f;
signed g;

int main() {
  int j = 0x24F96B7B;
  unsigned k;

  // Unrolled loop iterations
  --j;
  --j;
  --j;
  --j;

  unsigned p = g;

q:
  k = k >> 1;
  if (p) {
    k = k << j;
    goto q;
  }
}