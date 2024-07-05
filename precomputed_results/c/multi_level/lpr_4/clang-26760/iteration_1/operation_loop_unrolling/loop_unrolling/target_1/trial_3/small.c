unsigned g;

int main() {
  int i;
  int j = 0x24F96B7B;
  unsigned k;
  unsigned f;

  // Loop unrolling optimization
  j = 0;

q:
  k = k >> 1;
  i = g;
  if (i) {
    k = k << j;
    goto q;
  }
}